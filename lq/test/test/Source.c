#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"arrys.h"
#include<time.h>
int main() {
    int** array = 0;
    int sizeofrows = 0, sizeofcols = 0, choice, rowmax_and_colindex = 0, colmin = 0, rowindex;
    printf("Enter size of rows of array: ");
    scanf_s("%d", &sizeofrows);
    printf("\nEnter size of cols of array: ");
    scanf_s("%d", &sizeofcols);
    array = memory(sizeofrows, sizeofcols);
    printf("\n0 - manually, 1 - random");
    scanf_s("%d", &choice);
    if (choice == 0) array_input_manually(array, sizeofrows, sizeofcols);
    else array_input_random(array, sizeofrows, sizeofcols);
    for (int i = 0; i < sizeofrows; i++) {
        for (int j = 0; j < sizeofcols; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    int temp = -1;
    for (int i = 0; i < sizeofrows; i++) {
        rowindex = i;
        for (int j = 0; j < sizeofcols - 1; j++) {
            if (array[i][j + 1] > array[i][j]) {
                rowmax_and_colindex = j + 1;
            }
        }
        colmin = array[0][rowmax_and_colindex];
        for (int k = 0; k < sizeofrows - 1; k++) {
            if (array[k][rowmax_and_colindex] > array[k + 1][rowmax_and_colindex])
                colmin = array[k + 1][rowmax_and_colindex];
        }
        if (array[i][rowmax_and_colindex] == colmin) {
            temp++;
            break;
        }
    }
    if (temp != -1) {
        sizeofrows--;
        for (int n = rowindex; n < sizeofrows; n++) {
            for (int j = 0; j < sizeofcols; j++)
                array[n][j] = array[n + 1][j];
        }
        array = (int**)realloc(array, (sizeofrows) * sizeof(int*));
    }
    printf("\n");
    for (int i = 0; i < sizeofrows; i++) {
        for (int j = 0; j < sizeofcols; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}