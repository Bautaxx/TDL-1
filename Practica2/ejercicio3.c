#include <stdio.h>
#define M 4
#define N 4

void imprimirArreglo(int[], int);
void matriz_por_escalar(int[][N], int, int, int);
void imprimirMatriz(int[][N], int);

int main(int argc, char const *argv[])
{
    int matriz[M][N]={{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    matriz_por_escalar(matriz, M, N, 4); //Esta bien pasarlo como parametro?
    imprimirMatriz(matriz, M);
    

    return 0;
}

void matriz_por_escalar(int matriz[][N], int m, int n, int c)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            matriz[i][j] = c * matriz[i][j];
        }
    }
}

void imprimirArreglo(int arr[], int length)
{
    int i;
    printf("[");
    for (i = 0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("]");
}

void imprimirMatriz(int matriz[][N], int filas, int columnas){
    for (int i = 0; i < m; i++)
    {
        printf("[");
        for (int j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("]");
        printf("\n");
        
    }
}