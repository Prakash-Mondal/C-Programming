#include <stdio.h>
int multiply(int mat1[12][12], int mat2[12][12], int mul[12][12], int, int,
             int, int, int);
void transpose(int mul[12][12], int, int);

int main()
{
    int mat1[12][12], mat2[12][12], mul[12][12];
    int i, j, k, m, n, o, p;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns for 2nd matrix\n");
    scanf("%d%d", &o, &p);
    if (n == o)
    {
        printf("Enter the elements of the 1st matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter the elements of the 2nd matrix\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("The 1st matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", mat1[i][j]);
            }
            printf("\n");
        }
        printf("The 2nd matrix\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("%d\t", mat2[i][j]);
            }
            printf("\n");
        }
        printf("\nThe resultant matrix formed on multiplying the two matrices\n");
        multiply(mat1, mat2, mul, m, n, p, i, j);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {

                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
        transpose(mul, p, m);
    }
    else
        printf("\nMatrix multiplication not possible");
    return 0;
}

int multiply(int mat1[12][12], int mat2[12][12], int mul[12][12], int m, int n,
             int p, int i, int j)
{
    int k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            mul[i][j] = 0;

            for (k = 0; k < n; k++)
            {
                mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transpose(int mul[12][12], int p, int m)
{
    int i, j;
    printf("\nTranspose of the resultant matrix is \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", mul[j][i]);
        }
        printf("\n");
    }
}
