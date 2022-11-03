#pragma once
#include<stdio.h>
#include<stdlib.h>


void arry_memoey_allocate(const int row, const int col, int*** arry);
void arry_del_elements(int* row, const int col, int*** arry);
void arry_find_cols_with_2_zero(const int i, const int col, int*** arry, int* zero_counter);
