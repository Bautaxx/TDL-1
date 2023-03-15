#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int operando1, operando2, resultado, correctas;
    const int LIM_SUP = 100;
    srand(time(NULL));
    correctas = 0;
    for(int i = 1; i <= 4; i++){
        operando1 = rand() % (LIM_SUP + 1);
        operando2 = rand() % (LIM_SUP + 1);
        printf("%d + %d = ",operando1, operando2);
        scanf("%d", &resultado);
        if(resultado == (operando1 + operando2)){
            correctas++;
        }
    }
    printf("El alumno obtuvo: %d", correctas);
    return 0;
}