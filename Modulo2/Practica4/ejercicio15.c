#include <stdlib.h>
#include <stdio.h>

int **res_mat(int n)
{
    int **mat;
    int i, j;
    mat = malloc(n * sizeof(int *));
    for (j = 0; j < n; j++)
    {
        mat[j] = malloc((j + 1) * sizeof(int));
    }
    return mat;
}

void calc_mat(int **mat, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                mat[i][j] = 1;
            }
            else
            {
                mat[i][j] = mat[i - 1][j] + mat[i - 1][j - 1];
            }
        }
    }
}

void imp_mat(int **mat, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int **mat;
    mat = res_mat(n);
    calc_mat(mat, n);
    imp_mat(mat, n);
    return 0;
}