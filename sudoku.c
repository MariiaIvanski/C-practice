#include <stdbool.h>
#include <stdlib.h>

bool CheckSquare(int a, int b, unsigned int board[9][9], int *arr);

bool validSolution(unsigned int board[9][9])
{
    int i = 0, j = 0, k = 1;
    int *arr;
    arr = calloc(9, sizeof(int));

    for (i = 0; i < 9; ++i)
    {
        for (j = 0; j < 9; ++j)
        {
            k = board[i][j];
            arr[k - 1] = 1;
        }
        for (j = 0; j < 9; ++j)
        {
            if (arr[j] == 0)
            {
                return false;
            }
            arr[j] = 0;
        }
    }

    for (i = 0; i < 9; ++i)
    {
        for (j = 0; j < 9; ++j)
        {
            k = board[j][i];
            arr[k - 1] = 1;
        }
        for (j = 0; j < 9; ++j)
        {
            if (arr[j] == 0)
            {
                return false;
            }
            arr[j] = 0;
        }
    }

    for (i = 0; i < 9; i += 3)
    {
        for (j = 0; j < 9; j += 3)
        {
            if (CheckSquare(i, j, board, arr) == false)
            {
                return false;
            }
        }
    } 
    return true;
}

bool CheckSquare(int a, int b, unsigned int board[9][9], int *arr)
{
    int i, j, k = 0;
    for (i = a; i < (a + 3); ++i)
    {
        for (j = b; j < (b + 3); ++j)
        {
            k = board[j][i];
            arr[k - 1] = 1;
        }
    }
    for (j = a; j < (a + 3); ++j)
    {
        if (arr[j] == 0)
        {
            return false;
        }
        arr[j] = 0;
    }
    return true;
}

int main(void){

unsigned int example1[9][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2}, 
                             {6, 7, 2, 1, 9, 5, 3, 4, 8},
                             {1, 9, 8, 3, 4, 2, 5, 6, 7},
                             {8, 5, 9, 7, 6, 1, 4, 2, 3},
                             {4, 2, 6, 8, 5, 3, 7, 9, 1},
                             {7, 1, 3, 9, 2, 4, 8, 5, 6},
                             {9, 6, 1, 5, 3, 7, 2, 8, 4},
                             {2, 8, 7, 4, 1, 9, 6, 3, 5},
                             {3, 4, 5, 2, 8, 6, 1, 7, 9}}; 

if(validSolution(example1) == true){
    printf("success!\n");
}                         
}