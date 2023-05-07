#include <stdio.h>

typedef struct rectangulo
{
    float base;
    float altura;
} tipoRectangulo;
void leerRectangulo(tipoRectangulo *r);
float calcularArea(tipoRectangulo *r);

int main(int argc, char const *argv[])
{
    struct rectangulo r;
    leerRectangulo(&r);
    printf("Base del rectangulo: %f \n, Altura del rectangulo: %f \n4", r.base, r.altura);
    printf("El area del rectangulo: %f", calcularArea(&r));
    return 0;
}

void leerRectangulo(tipoRectangulo *r)
{
    printf("Ingrese base del rectangulo: ");
    scanf("%f", &r->base);
    printf("Ingrese altura del rectangulo: ");
    scanf("%f", &r->altura);
}

float calcularArea(tipoR78ectangulo *r)
{
    float area;
    area = (r->base) * (r->altura);
    return area;
}
