#pragma once
#include<stdio.h>
#include<stdlib.h>

#include"studentStruct.h"
#include"input.h"
#include"output.h"
#include "memory.h"
#include"sort.h"
#include"result.h"

#pragma warning(disable : 4996)

enum choice
{
	START_AN_EXEAM = 1,
	SWAP_STUDENTS,
	OUTPUT_CURRENT_LIST,
	ADD_STUDENTS,
	CHANGE_PRIORITY
};

int choice_switch(const int choice, int* size_of_queue, int* counter, int* sub_priority, students* queue, students* passed);
void choice_swap_students(const int first_person, const int second_person, students* queue);