#pragma once

#include"studentStruct.h"
#include"memory.h"

void queue_shift(int* size, students* students_queue);
void passed_students_add_person(const int counter, const int result, students* queue, students* passed);