#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"output.h"

void arry_memoey_allocate(const int row, const int col, int*** arry);
void arry_delete_max_elements(const int row, int*** arry);
void arry_find_max_elements(const int row, const int col, int* max_elem, int*** arry, const int i);
void arry_find_length_of_the_col(const int i, int* col, int*** arry);
void arry_free(const int row, int*** arry);