/*Write a program to find the transpose of a sparse matrix given in 3-tuple from.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, row, col, nzero = 0, k = 1;
    printf("Enter the row size of matrix:=");
    scanf("%d", &row);
    printf("Enter the column size of matrix:=");
    scanf("%d", &col);
    int m[row][col];
    printf("\nEnter all elements for sparse matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("\nYour sparse matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (m[i][j] != 0)
            {
                nzero++;
            }
        }
    }
    printf("\nNumber of none zero element %d\n", nzero);

    int s[nzero + 1][3];
    s[0][0] = row;
    s[0][1] = col;
    s[0][2] = nzero;

    // passing the values to sparse matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
          if(m[i][j]!=0)
          {
            s[k][0] = i;
            s[k][1] = j;
            s[k][2] = m[i][j];
            k++;
          }
        }
    }
    // display sparse matrix
    printf("\nsparse matrix in 3 tuple_form:\n");
    for (i = 0; i < (nzero + 1); i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }

    //transpose
    printf("\nTranspose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<(nzero+1);j++)
        {
            printf("%d\t",s[j][i]);
        }
        printf("\n");
    }

    return 0;
}