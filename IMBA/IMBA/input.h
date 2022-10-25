#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"output.h"
#include"choice.h"
#include"memory.h"
#include"studentStruct.h"

void input_initials(int* size);
void input_priority_subgroup(int* sub_priority);
void input_choice(int* choice);
void input_result(int* result);
void input_swap(int* swap1, int* swap2, const int size);
void input_register_check(char input[]);
