#pragma once
#include<stdio.h>
#include<stdlib.h>

void array_memoey_allocate(const int row, const int col, int*** array);
int array_sum(int*** array, const int row, const int col);
