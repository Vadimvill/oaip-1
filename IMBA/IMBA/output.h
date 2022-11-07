#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"input.h"
#include"studentStruct.h"

void output_students_list(const int size, students** queue);
void output_priority_subgroup();
void output_choice();
void output_start(students** queue);
void output_student_passed(const int counter, students** passed);

