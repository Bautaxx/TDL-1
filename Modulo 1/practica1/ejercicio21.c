#include <stdio.h>
int incremento(int);
int main()
{
    float i;
    for (i = 6; i > 0.5; i /= 2) // i = 6, i = 3, i = 1.5, i = 0.75, i = 0.378 no entra al for
        printf("i=%5.1f j=%5f\n", i,  incremento(i));
    return 0;
}

// consola:
/*
6 7
3 3
1.5 4.5
0.75 4.75
*/
float incremento(int N)
{
    static int j = 0;
    j++; // j = 1, j = 2, j = 3, j = 4
    return (N % 2 ? N : N + j);
}