#include <stdio.h>

int main()
{
    int num1, num2;
    char operador; 
    float resultado;
    scanf("%d %c %d", &num1, &operador, &num2);
    switch (operador)
    {
    case 42:
        resultado = (float)num1 * num2;
        break;
    case 43:
        resultado = (float)num1 + num2;
        break;
    case 45:
        resultado = (float)num1 - num2;
        break;
    case 47:
        resultado = (float) num1 / num2;
    }
    printf("%f", resultado);
    return 0;
}
