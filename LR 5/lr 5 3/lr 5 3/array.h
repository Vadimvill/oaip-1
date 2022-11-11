#pragma once
#include<stdio.h>
#include<stdlib.h>


void array_memoey_allocate(const int row, const int col, int*** array);
void array_del_elements(int* row, const int col, int*** array);
void array_find_cols_with_2_zero(const int i, const int col, int*** array, int* zero_counter);
void array_free(const int, int**);