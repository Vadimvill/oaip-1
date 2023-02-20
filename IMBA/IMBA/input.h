#pragma once

#include<stdio.h>
#include<stdlib.h>

#include"output.h"
#include"choice.h"
#include"memory.h"
#include<string.h>
#include"studentStruct.h"

void input_initials(int* size, students** queue);
void input_priority_subgroup(int* sub_priority);
void input_choice(int* choice);
int input_result();
int input_swap_number(const int size);
void register_to_upper(char* input);
