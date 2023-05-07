#include <stdio.h>
#define LENGTH 9

void replace(char oldStr[], char old, char new);

int main(int argc, char const *argv[])
{
    char str[LENGTH] = "zuri";
    printf("%s \n", str);
    replace(str, 'z', 'b');
    printf("%s", str);

    }

// Además, la función debe retornar la cadena apuntada por el puntero.
// Se refiere a que no debo modificar el string anterior y retornar uno nuevo?

void  replace(char * oldStr, char old, char new)
{
    for (int i = 0; i < LENGTH; i++)
    {
        if (oldStr[i] == old)
        {
            oldStr[i] = new;
        }
    }
}