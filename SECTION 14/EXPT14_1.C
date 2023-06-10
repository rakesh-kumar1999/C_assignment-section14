/*Write a program to convert a sparse matrix given in regular form to 3-tuple form.*/
#include "stdio.h"
#include "stdlib.h"
#define size 10
int main()
{
    int mat[size][size];
    int row, col;
    printf("Enter row size of sparse matrix\n");
    scanf("%d", &row);
    printf("Enter column size of sparse matrix\n");
    scanf("%d", &col);
    printf("Enter %d no. of elements to sparse matrix\n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nYour Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    int non_zero = 0, k = 1;
    // find the no of non zero element is present in sparse matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] != 0)
            {
                non_zero++;
            }
        }
    }
    // create a matrix which can store 3 tuple form of sparse matrix
    int spa[non_zero + 1][3];
    // Entering the value of first row in 3 tuple form
    spa[0][0] = row;
    spa[0][1] = col;
    spa[0][2] = non_zero;
    // Entering the value into sparse matrix of 3 tuple form
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] != 0)
            {
                spa[k][0] = i;
                spa[k][1] = j;
                spa[k][2] = mat[i][j];
                k++;
            }
        }
    }
    printf("\nsparse matrix in 3-triple form:\n");
    for (int i = 0; i < non_zero + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", spa[i][j]);
        }
        printf("\n");
    }
    return 0;
}
