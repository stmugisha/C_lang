//Author: Stephen Mugisha

/*
Addition of two 2x2 matrices
*/

#include <stdio.h>
#define m 2
#define n 2

void getMatrix(const int mat[][n], int rows, int cols);
int sum(int mat1[][n], const int mat2[][n], int rows, int cols);

int main()
{
    int mat1[m][n] = {{1, 0}, {0, 1}};
    int mat2[m][n] = {{1, 1}, {1, 1}};

    printf("Input matrix A:");
    getMatrix(mat1, m, n);
    printf("\n");

    printf("Input matrix B:");
    getMatrix(mat2, m, n);
    printf("\n\n");
    
    printf("matrix A + matrix B:");
    sum(mat1, mat2, m, n);
    printf("\n");

    return 0;
}

void getMatrix(const int mat[][n], int rows, int cols)
{
    int r;    //row counter
    int c;    //column counter

    for(r=0; r < rows; ++r)
    {
        printf("\n");
        for(c=0; c < cols; ++c)
        {
            printf("%3d", mat[r][c]);
        }
    }
}

int sum(int mat1[][n], const int mat2[][n], int rows, int cols)
{
    int r;    //row counter
    int c;    //column counter

    for(r=0; r < rows; ++r)
    {
        for(c=0; c < cols; ++c)
        {
            mat1[r][c] += mat2[r][c];
        }
    }
    getMatrix(mat1, m, n);
}
