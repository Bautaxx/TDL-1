#include <stdio.h>
#define SIZE 4

typedef struct pun3d
{
    float x;
    float y;
    float z;
}punto3d;



int main(int argc, char const *argv[])
{
    //struct pun3d prueba1;
    punto3d prueba2 [SIZE];
    for(int i)
    printf("Tamanio pun3d: %d, Tamanio punto3d: %d", (int)sizeof(prueba1), (int)sizeof(prueba2));
    return 0;
}
