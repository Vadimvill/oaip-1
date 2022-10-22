#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"studentStruct.h"
#include"input.h"
#include"output.h"
#include "memory.h"
#include"result.h"

int choice_switch(const int* choice, int* size, int* result, int* swap1, int* swap2, int arr_result[], int* counter);
void choice_swap(int* swap1, int* swap2);