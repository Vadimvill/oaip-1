#pragma once
#include"studentStruct.h"
#include<stdlib.h>
#include"memory.h"

void array_shift(int* size, students** students_queue);
void array_passed_students(const int counter, const int result, students** queue, students** passed);