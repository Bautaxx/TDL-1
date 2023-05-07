#include <stdio.h>
#include <string.h>
#define MAXLEN 50

int main(int argc, char const *argv[])
{
    char stringAux [MAXLEN];
    int ocurrencias ['z' - 'a'] = {0};
    gets(stringAux);
    int i = 0;
    while (stringAux[i] != '\0')
    {
        ocurrencias[stringAux[i] - 'a'] ++;
        i++;
    }
    for(int i = 0; i < ('z' - 'a'); i++){
        printf("%d: %d\n", i, ocurrencias[i]);
    }
    
    return 0;
}
