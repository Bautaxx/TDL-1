#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("Cuadrado de %d = %lf ", i, pow(i, 2));
        printf("Cubo de %d = %lf ", i, pow(i, 3));
        printf("Raiz cuadrada de %d = %f \n", i, sqrt(i));
    }
    return 0;
}