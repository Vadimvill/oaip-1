#pragma once

#include<stdio.h>
#include<string.h>

#include"studentStruct.h"
#include"memory.h"
#include"bool.h"

enum subgroup
{
	FIRST = 1,
	SECOND = 2
};

void parse_initial_from_file(int* size_of_queue, students** queue, FILE* file);
void find_initials_start_position(FILE* file);
void parse_initials(FILE* file, students* queue);