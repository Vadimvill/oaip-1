#include"arrys.h"
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<time.h>
int** memory(int sizeofrows, int sizeofcols) {
    int** mas;
    mas = (int**)calloc(sizeofrows, sizeof(int*));
    for (int i = 0; i < sizeofrows; i++)
    {
        mas[i] = (int*)calloc(sizeofcols, sizeof(int));
    }
    return mas;
}
void array_input_random(int** mas, int sizeofrows, int sizeofcols) {
    srand(time(NULL));
    for (int i = 0; i < sizeofrows; i++) {
        for (int j = 0; j < sizeofcols; j++)
            mas[i][j] = rand() % 30;
    }
}
void array_input_manually(int** mas, int sizeofrows, int sizeofcols) {
    for (int i = 0; i < sizeofrows; i++) {
        for (int j = 0; j < sizeofcols; j++) {
            printf("Enter element mas[%d][%d]: ", i, j);
            scanf_s("%d", &mas[i][j]);
        }
    }
}