#include <stdio.h>

typedef struct rgb16Struct{
    unsigned r : 5;
    unsigned g : 6;
    unsigned b : 5;
}rgb16;

typedef struct rgb24Struct{
    unsigned r : 8;
    unsigned g : 8;
    unsigned b : 8;
}rgb24;

rgb24 conv16(rgb16);
rgb16 conv24(rgb24);
void leerColor16(rgb16 *);
void leerColor24(rgb24 *);
void imprimirColor16(rgb16);
void imprimirColor24(rgb24);

int main(int argc, char const *argv[])
{
    rgb16 color1;
    rgb24 color2;
    leerColor16(&color1);
    leerColor24(&color2);
    imprimirColor16(color1);
    imprimirColor24(color2);
    rgb24 pruebaConversion1 = conv16(color1);
    rgb16 pruebaConversion2 = conv24(color2);
    imprimirColor16(pruebaConversion2);
    imprimirColor24(pruebaConversion1);
    return 0;
}

rgb24 conv16(rgb16 orginial){
    rgb24 convertido;
    convertido.r = orginial.r;
    convertido.g = orginial.g;
    convertido.b = orginial.b;
    return convertido;
}
rgb16 conv24(rgb24 orginial){
    rgb16 convertido;
    convertido.r = orginial.r;
    convertido.g = orginial.g;
    convertido.b = orginial.b;
    return convertido;
}
void leerColor16(rgb16 * color){
    color->r = 15;
    color->g = 18;
    color->b = 9;
}
void leerColor24(rgb24 * color){
    color->r = 5;
    color->g = 10;
    color->b = 4;
}

void imprimirColor16(rgb16 color){
    printf("RGB = (%d, %d, %d)\n", color.r, color.g, color.b);
}
void imprimirColor24(rgb24 color){
    printf("RGB = (%d, %d, %d)\n", color.r, color.g, color.b);
}

