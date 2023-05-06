#include <stdio.h>
#include <string.h>

void inv_str(char s1[])
{
    int cant = strlen(s1);
    char *s2 = s1 + (cant - 1);
    char temp;
    for (; s1 < s2; s1++, s2--)
    { // hola  //temp= h , aolh,
        temp = *s1;
        *s1 = *s2;
        s2[0] = temp; //*(s2 + 0)
    }
}

int main(int argc, char const *argv[])
{
    char stringPrueba[20];
    gets(stringPrueba);
    inv_str(stringPrueba);
    puts(stringPrueba);
}
