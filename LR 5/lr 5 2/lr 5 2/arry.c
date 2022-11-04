#include "arry.h"

void arry_memoey_allocate(const int row, const int col,int*** arry)
{
    *arry = (int**)malloc(row,sizeof(int*));;
    for (int i = 0; i < row; i++)
    {
        (*arry)[i] = (int*)calloc(col, sizeof(int));
    }
}

void arry_delete_max_elements(const int row,int*** arry)
{
    for (int i = 0; i < row; i++)
    {
        int col= 0, max_elem =  (*arry)[i][0];
        arry_find_length_of_the_col(i, &col,arry);
        arry_find_max_elements(row, col, &max_elem,arry, i);
        for (int j = 0; j < col; j++)
        {
            if ((*arry)[i][j] == max_elem)
            {
                col--;
                for (int k = j; k < col; k++)
                {
                    (* arry)[i][k] = (*arry)[i][k + 1];
                }
                j--;
                (*arry)[i] = (int*)realloc((*arry)[i], col * sizeof(int));
            }   
        }
    }
}

void arry_find_max_elements(const int row, const int col, int* max_elem,int*** arry,const int i)
{
    for (int j = 0; j < col; j++)
    {
        if ((*arry)[i][j] > (* max_elem))
        {
            (* max_elem) = (*arry)[i][j];
        }
    }
}

void arry_find_length_of_the_col(const int i,int* col,int*** arry)
{
    int j = 0;
    while ((*arry)[i][j])
    {
        (*col)++;
        j++;
    }
    (*col)++;
}

void arry_free(const int row, int** arry)
{
        for (int j = 0; j < row; j++)
        {
            free(*(arry + j));
        }
}
