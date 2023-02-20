#pragma once

#include<stdlib.h>

#include"studentStruct.h"

void memory_string_allocate(char** string);
void memory_delete(char** arr);
void memory_strcut_allocate(const int struct_size, students** input);
void memory_struct_reallloc(const int struct_size, students** input);

