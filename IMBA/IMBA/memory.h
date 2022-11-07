#pragma once
#include "input.h"
#include "result.h"

void memory_array_allocate(char** arr);
void memory_delete(char** arr);
void memory_strcut_allocate(const int struct_size, students** input);
void memory_struct_reallloc(const int struct_size, students** input);

