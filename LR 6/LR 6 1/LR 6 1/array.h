#pragma once
#include<stdio.h>
#include<stdlib.h>

void array_memory_allocate(const int array_size, int** array);
int array_find_first_odd(int array_size, int** array);
int array_find_first_negative(int array_size, int** array);
void array_swap(int** array, int i, int j);
void array_input_debug(const int size, int** array);
