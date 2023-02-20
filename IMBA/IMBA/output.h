#pragma once

#include<stdio.h>

#include"studentStruct.h"

void output_students_list(const int size, students* queue);
void output_priority_subgroup();
void output_choice();
void output_start_an_exam(students* queue);
void output_student_passed(const int counter, students* passed);
void register_to_upper(char* input);

