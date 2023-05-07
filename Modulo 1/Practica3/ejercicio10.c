#include <stdio.h>
#define LONGITUD 8

typedef enum bitsEnumeracion
{
    VIBRAR = 1,
    LINTERNA = 2,
    TRASERA = 4,
    FRONTAL = 8,
    DATOS = 16,
    GPS = 32,
    WIFI = 64,
    BLUETOOTH = 128
} bitsEnum;
const bitsEnum todosPrendidos = 0xFF;
const bitsEnum todosApagados = 0x00;

void desactivar(bitsEnum *celular, bitsEnum bit);
void activar(bitsEnum *celular, bitsEnum bit);
void invertir(bitsEnum *celular, bitsEnum bit);
int esActivo(bitsEnum celular, bitsEnum bit);


int main(int argc, char const *argv[])
{
    bitsEnum celular = todosApagados;
    // activar(&celular, WIFI);
    celular = todosPrendidos;
    printf("Todos prendidos: %d\n", celular);
    desactivar(&celular, GPS);
    printf("GPS desactivado: %d\n", celular);
    activar(&celular, DATOS);
    // invertir(&celular, WIFI);
    // printf("%d\n", celular);
    printf("%d",esActivo(celular, GPS));

    return 0;
}

void activar(bitsEnum *celular, bitsEnum bit)
{
    *celular |= bit;
}

void desactivar(bitsEnum *celular, bitsEnum bit)
{
    *celular &= ~bit;                            
}
//100010
//111101
//------
//100000

void invertir(bitsEnum *celular, bitsEnum bit)
{
    *celular ^= bit;
}

int esActivo(bitsEnum celular, bitsEnum bit){
    int aux = (celular & bit);
    return (aux == bit);
}
