#include <stdio.h>
#include <string.h>
#define MAXTAMANIO 21

int main()
{
    char stringAux [MAXTAMANIO];
    char stringMin [MAXTAMANIO];

    int minLen = 99999;
    int auxLen;

    gets(stringAux);

    while (strcmp(stringAux, "FIN"))
    {
        auxLen = strlen(stringAux);
        if(auxLen < minLen){
            minLen = auxLen;
            strcpy(stringMin, stringAux);
        }
        gets(stringAux);
    }

    printf("La palabra de menor longitud es: %s", stringMin);
    
    
    return 0;
}
