#include <stdio.h>
#include <stdlib.h>
int **multiplication(int A[10][10], int B[10][10], int, int, int);
void transpose(int P[10][10], int, int);
int main()
{
    int A[10][10], B[10][10], M[10][10], P[10][10];
    int R1, R2, C1, C2, i, j, k, total;
    int **N;
    printf("Enter number of Rows and Columns of 1st matrix :\n");
    scanf("%d%d", &R1, &C1);
    printf("Enter number of Rows and Columns of 2nd matrix :\n");
    scanf("%d%d", &R2, &C2);
    if (C1 == R2)
    {
        printf("Enter values for 1st matrix \n");
        for (i = 0; i < R1; i++)
        {
            for (j = 0; j < C1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Enter values for 2nd matrix :\n");
        for (i = 0; i < R2; i++)
        {
            for (j = 0; j < C2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        printf("1st matrix is :\n");
        for (i = 0; i < R1; i++)
        {
            for (j = 0; j < C1; j++)
            {
                printf("%4d\t", A[i][j]);
            }
            printf("\n");
        }
        printf("2nd matrix is :\n");
        for (i = 0; i < R2; i++)
        {
            for (j = 0; j < C2; j++)
            {
                printf("%4d\t", B[i][j]);
            }
            printf("\n");
        }
        printf("\nMultiplication result is :\n");
        N = multiplication(A, B, R1, C2, C1);
        for (i = 0; i < R1; i++)
        {
            for (j = 0; j < C2; j++)
            {
                printf("%4d\t", N[i][j]);
                P[i][j] = N[i][j];
            }
            printf("\n");
        }
        printf("\nTranspose of the resultant matrix is :\n");
        transpose(P, C2, R1);
    }
    else
    {
        printf("Multiplication is not possible");
    }
    //for free the memory
    for (i = 0; i < 10; i++)
    {
        free(N[i]);
    }
    free(N);
    return 0;
}
int **multiplication(int A[10][10], int B[10][10], int R1, int C2, int C1)
{
    int i, j, k, total;
    int **M;
    for (i = 0; i < 10; i++)
    {
        M[i] = malloc(sizeof(int *) * 10);
    }
    for (i = 0; i < R1; i++)
    {
        for (j = 0; j < C2; j++)
        {
            total = 0;
            for (k = 0; k < C1; k++)
            {
                total = (total + (A[i][k] * B[k][j]));
                M[i][j] = total;
            }
        }
    }
    return M;
}
void transpose(int P[10][10], int C2, int R1)
{
    int i, j;
    for (i = 0; i < C2; i++)
    {
        for (j = 0; j < R1; j++)
        {
            printf("%4d\t", P[j][i]);
        }
        printf("\n");
    }
}
