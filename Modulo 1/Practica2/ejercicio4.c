#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 3

void transponerMatriz(int[][N], int[][M]);
void rellenarMatriz(int[][N]);
void imprimirMatriz(int[][N], int, int);
void imprimirMatriz2(int[][M], int, int);

int main(int argc, char const *argv[])
{
    int matrizOriginal[M][N] = {{1, 2}, {3, 4}, {5, 6}};
    int matrizTranspuesta[N][M];
    // rellenarMatriz(matrizOriginal);
    imprimirMatriz(matrizOriginal, M, N);
    transponerMatriz(matrizOriginal, matrizTranspuesta);
    imprimirMatriz2(matrizTranspuesta, N, M);
}

void transponerMatriz(int matriz[][N], int matrizTranspuesta[][M])
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }
}

void rellenarMatriz(int matriz[][N])
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            matriz[i][j] = rand();
        }
    }
}

void imprimirMatriz(int matriz[][N], int filas, int columnas)
{
    printf("Matriz original: \n");
    for (int i = 0; i < filas; i++)
    {
        printf("|");
        for (int j = 0; j < columnas; j++)
        {
            printf("%d, ", matriz[i][j]);
        }
        printf("|");
        printf("\n");
    }
}

void imprimirMatriz2(int matriz[][M], int filas, int columnas)
{
    printf("Matriz transpuesta: \n");
    for (int i = 0; i < filas; i++)
    {
        printf("|");
        for (int j = 0; j < columnas; j++)
        {
            printf("%d, ", matriz[i][j]);
        }
        printf("|");
        printf("\n");
    }
}