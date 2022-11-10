#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"output.h"

void array_memoey_allocate(const int row, const int col, int*** array);
void array_delete_max_elements(const int row, int*** array);
void array_find_max_elements(const int row, const int col, int* max_elem, int*** array, const int i);
void array_find_length_of_the_col(const int i, int* col, int*** array);
void array_free(const int row, int*** array);