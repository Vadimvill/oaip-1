#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"studentStruct.h"
#include"input.h"
#include"output.h"
#include "memory.h"
#include"sort.h"
#include"result.h"

int choice_switch(const int choice, int* size, int* result, int* swap1, int* swap2, int* counter, int* sub_priority, students** queue, students** passed);
void choice_swap(const int swap1, const int swap2, students** queue);