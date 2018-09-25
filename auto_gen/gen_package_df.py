# -*- coding: utf-8 -*-
import os

from io import BytesIO
from dtd_def import *
from file_util import *

package_struct_template_file = './templates/package_struct.template'

packages_include_template_file = './templates/packages.template'

include_all_headers = 'Packages.h'

def generate_package_struct(version, package, target_path, version_number):
    template = load_template_file(package_struct_template_file)
    package_name_upper = package.name.upper()
    member_def_lines = []
    member_clear_lines = []
    member_merge_lines = []
    member_write_sections = []
    for field_info in package.fields:
        member_def_lines.append(_format_member_def_line(field_info))
        member_clear_lines.append(_format_member_clear_lines(field_info))
        member_merge_lines.append(_format_member_merge_lines(field_info))
        member_write_sections.append(_format_member_write_lines(field_info))

    d = {}
    d['version'] = version
    d['package_name_upper'] = package_name_upper
    d['package_name'] = package.name
    d['member_def_lines'] = add_whitespaces('\n'.join(member_def_lines), 4)
    d['member_clear_lines'] = add_whitespaces('\n'.join(member_clear_lines), 8)
    d['member_merge_lines'] = add_whitespaces('\n'.join(member_merge_lines), 8)
    d['member_write_sections'] = add_whitespaces('\n'.join(member_write_sections), 8)
    d['version_number'] = version_number
    target_fpath = '{0}/{1}/{2}.h'.format(target_path, version,package.name) 
    save_cpp_file(template.format_map(d), target_fpath)

def _format_member_def_line(field_info):
    fname = field_info.name
    vec_fmt = 'std::vector<{0}> {1}s;'
    field_fmt = '{0} {1};'
    ptr_fmt = '{0}Ptr p{0};'
    if field_info.use_vector():
        return vec_fmt.format(fname, fname[0].lower()+fname[1:])
    if field_info.use_field():
        return field_fmt.format(fname, fname[0].lower()+fname[1:])
    if field_info.use_smart_ptr():
        return ptr_fmt.format(fname)


def _format_member_clear_lines(field_info):
    fname = field_info.name
    vec_fmt = '{0}s.clear();'
    field_fmt = 'memset(&{0}, 0, sizeof({1}));'
    ptr_fmt = 'p{0} = nullptr;'
    if field_info.use_vector():
        return vec_fmt.format(fname[0].lower()+fname[1:])
    if field_info.use_field():
        return field_fmt.format(fname[0].lower()+fname[1:], fname)
    if field_info.use_smart_ptr():
        return ptr_fmt.format(fname)

def _format_member_merge_lines(field_info):
    fname = field_info.name
    vec_fmt = """if (fid == FID_{0})
{{
	{1}s.push_back(field.{1});
	return true;
}}"""
    field_fmt = """if (fid == FID_{0})
{{
	memcpy(&{1}, &field.{1}, sizeof({0}));
	return true;
}}"""
    ptr_fmt = """if (fid == FID_{0})
{{
	if (p{0}.get() == nullptr)
	{{
		p{0} = {0}Ptr(new {0}());
	}}
	memcpy(p{0}.get(), &field.{1}, sizeof({0}));
	return true;
}}"""
    if field_info.use_vector():
        return vec_fmt.format(fname, fname[0].lower()+fname[1:])
    if field_info.use_field():
        return field_fmt.format(fname, fname[0].lower()+fname[1:])
    if field_info.use_smart_ptr():
        return ptr_fmt.format(fname, fname[0].lower()+fname[1:])

def _format_member_write_lines(field_info):
    fname = field_info.name
    vec_fmt = """//std::vector<{0}> 
vecSize = {1}s.size();			
for (int i = 0; i < vecSize; i++)
{{
	{0}Helper::writeBuffer({1}s[i],
		fieldBuffer, fieldLen);
	if (MAX_FTDC_LENGTH - (nextWrite - ftdcBuffer) < FTDC_FIELD_HEADER_LENGTH + fieldLen)
	{{					
		ftdcHeader.contentLength = nextWrite - ftdcBuffer;
		ftdcHeader.fieldCount = writeFieldCount;
		headers.push_back(ftdcHeader);
		ftdcContents.push_back(std::string(ftdcBuffer, nextWrite - ftdcBuffer));
		memset(ftdcBuffer, 0, MAX_FTDC_LENGTH + 1);
		nextWrite = ftdcBuffer;
		writeFieldCount = 0;
	}}
	FtdcFieldHeader fieldHeader;
	fieldHeader.fid = FID_{0};
	fieldHeader.fidLength = fieldLen;
	nextWrite = writeFtdcFieldHeader(fieldHeader, nextWrite);
	memcpy(nextWrite, fieldBuffer, fieldLen);
	nextWrite += fieldLen;
	writeFieldCount += 1;
}}
"""
    field_fmt = """//{0}
{0}Helper::writeBuffer({1},
	fieldBuffer, fieldLen);
if (MAX_FTDC_LENGTH - (nextWrite - ftdcBuffer) < FTDC_FIELD_HEADER_LENGTH + fieldLen)
{{
	ftdcHeader.contentLength = nextWrite - ftdcBuffer;
	ftdcHeader.fieldCount = writeFieldCount;
	headers.push_back(ftdcHeader);
	ftdcContents.push_back(std::string(ftdcBuffer, nextWrite - ftdcBuffer));
	memset(ftdcBuffer, 0, MAX_FTDC_LENGTH + 1);
	nextWrite = ftdcBuffer;
	writeFieldCount = 0;
}}
FtdcFieldHeader fieldHeader;
fieldHeader.fid = FID_{0};
fieldHeader.fidLength = fieldLen;
nextWrite = writeFtdcFieldHeader(fieldHeader, nextWrite);
memcpy(nextWrite, fieldBuffer, fieldLen);
nextWrite += fieldLen;
writeFieldCount += 1;
"""
    ptr_fmt = """//{0}
if(p{0}.get() != nullptr)
{{
	{0}Helper::writeBuffer(*(p{0}.get()),
		fieldBuffer, fieldLen);
	if (MAX_FTDC_LENGTH - (nextWrite - ftdcBuffer) < FTDC_FIELD_HEADER_LENGTH + fieldLen)
	{{
		ftdcHeader.contentLength = nextWrite - ftdcBuffer;
		ftdcHeader.fieldCount = writeFieldCount;
		headers.push_back(ftdcHeader);
		ftdcContents.push_back(std::string(ftdcBuffer, nextWrite - ftdcBuffer));
		memset(ftdcBuffer, 0, MAX_FTDC_LENGTH + 1);
		nextWrite = ftdcBuffer;
		writeFieldCount = 0;
	}}
	FtdcFieldHeader fieldHeader;
	fieldHeader.fid = FID_{0};
	fieldHeader.fidLength = fieldLen;
	nextWrite = writeFtdcFieldHeader(fieldHeader, nextWrite);
	memcpy(nextWrite, fieldBuffer, fieldLen);
	nextWrite += fieldLen;
	writeFieldCount += 1;
}}
"""
    if field_info.use_vector():
        return vec_fmt.format(fname, fname[0].lower()+fname[1:])
    if field_info.use_field():
        return field_fmt.format(fname, fname[0].lower()+fname[1:])
    if field_info.use_smart_ptr():
        return ptr_fmt.format(fname, fname[0].lower()+fname[1:])


def generate_package_include(version, packages, target_path):
    template = load_template_file(packages_include_template_file)
    include_lines = []
    ptr_lines = []
    member_lines = []
    read_cases_lines = []
    retrieve_cases_lines = []
    include_template = '#include "{0}.h"'
    ptr_template = 'DECLARE_PTR({0})'
    member_template ='{0} {1};'
    read_template = """case(TID_{0}):
{{
    if({1}.mergeFtdcMessage(message))
    {{
        readResult = TID_{0};       
    }}
    break;
}}"""
    read_template_dialog = """case(TID_{0}):
{{
    bool parseRtn = false;
    if(m_isReceiveReq && req{0}.mergeFtdcMessage(message))
    {{
        readResult = TID_{0};
        break;
    }}
    if(!m_isReceiveReq && rsp{0}.mergeFtdcMessage(message))
    {{
        readResult = TID_{0};
        break;
    }}
    break;
}}"""
    retrieve_template = """case(TID_{0}):
{{
    retrieveResult = (Package*)&{1};
    break;
}}"""
    retrieve_template_dialog = """case(TID_{0}):
{{
    if(m_isReceiveReq)
    {{
        retrieveResult = (Package*)&req{0};
    }}
    else
    {{
        retrieveResult = (Package*)&rsp{0};
    }}
    break;
}}"""
    tids = {}
    for package in packages:
        var_name = package.name[0].lower() + package.name[1:]
        include_lines.append(include_template.format(package.name))
        ptr_lines.append(ptr_template.format(package.name))
        member_lines.append(member_template.format(package.name, var_name ))        
        tids[package.tid] = package.model
    

    for tid in tids.items():
        tid_tag = tid[0].split('_')[1]
        if tid[1] != 'dialog':
            var_name = tid_tag[0].lower() + tid_tag[1:]
            read_cases_lines.append(read_template.format(tid_tag, var_name))
            retrieve_cases_lines.append(retrieve_template.format(tid_tag, var_name))
        else:
            read_cases_lines.append(read_template_dialog.format(tid_tag))
            retrieve_cases_lines.append(retrieve_template_dialog.format(tid_tag))


    d = {}
    d['version'] = version
    d['include_file_headers'] = '\n'.join(include_lines)
    d['declare_smart_ptr_lines'] = '\n'.join(ptr_lines)
    d['package_members'] = add_whitespaces('\n'.join(member_lines),4)
    d['read_cases'] = add_whitespaces('\n'.join(read_cases_lines), 8)
    d['retrieve_cases'] = add_whitespaces('\n'.join(retrieve_cases_lines),8)

    target_fpath = '{0}/{1}/{2}'.format(target_path, version, include_all_headers) 
    save_cpp_file(template.format_map(d), target_fpath)



    
    

