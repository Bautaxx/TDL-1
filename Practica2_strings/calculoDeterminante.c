#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define N 3

float determinantCalculationRecursive ();


int main(int argc, char const *argv[])
{
    printf("Determinante: %f", determinantCalculationRecursive());
    return 0;
}

float determinantCalculationRecursive (){
    float determinant = 0;
    int i, j, k, n, m;
    int matriz[N][N] = {{1, 0 , 2}, {-1, 1, 3}, {0, 0, 1}};
    int matrizAux[N][N];
    if (N == 1){
        determinant = matriz[0][0];
    }
    else if (N == 2){
        determinant = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    }
    else{
        for (i = 0; i < N; i++){
            m = 0;
            n = 0;
            for (j = 0; j < N; j++){
                for (k = 0; k < N; k++){
                    if (j != 0 && k != i){
                        matrizAux[m][n] = matriz[j][k];
                        if (n < (N - 2)){
                            n++;
                        }
                        else{
                            n = 0;
                            m++;
                        }
                    }
                }
            }
            determinant = determinant + pow(-1, i) * matriz[0][i] * determinantCalculationRecursive(matrizAux, N - 1);
        }
    }
    return determinant;
}