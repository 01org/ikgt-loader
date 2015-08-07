/*******************************************************************************
* Copyright (c) 2015 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef _E820_H_
#define _E820_H_

#include "mon_defs.h"
#include "xmon_desc.h"
#include "common.h"
#include "multiboot.h"


boolean_t get_e820_table_from_mb1(xmon_desc_t *xd, uint64_t *e820_addr);
boolean_t get_e820_table_from_mb2(xmon_desc_t *xd, uint64_t *e820_addr);

/*
 * copy e820 memory info to other address, and hide some memories in e820 table.
 */
boolean_t hide_runtime_memory_mb1(xmon_desc_t *xd,
				 uint32_t hide_mem_addr,
				 uint32_t hide_mem_size);
boolean_t hide_runtime_memory_mb2(xmon_desc_t *xd,
				 uint32_t hide_mem_addr,
				 uint32_t hide_mem_size);

#endif
/* End of file */