#include <stdio.h>
double cuadrado(double);
int main()
{
    printf("%f", cuadrado(4));
}

double cuadrado(double a)
{
    return a * a;
}