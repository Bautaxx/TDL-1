#include <stdio.h>
#define N 4
#define M 3
#define forn(i, n) for (i = 0; i < n; i++)

int main(int argc, char const *argv[])
{
    int return 0;
}

void gaussianElimination(float matrix[][N])
{
    // No pivots are 0 and it is a squared matrix
    int i, pivot;
    for(pivot = 1; pivot < M; pivot ++)
        forn(i, N)
        {
            matrix[pivot][i] = (matrix[pivot][i] / matrix[pivot][pivot - 1]) - (matrix[pivot + 1][i] / matrix[pivot + 1][pivot - 1]); // Divide by self, 1 is hard coded
        }
    
}
