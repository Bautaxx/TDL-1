#include <stdlib.h>
#include <stdio.h>
#define CAMPOS 8
#define STRLEN 50
#define MAXLENGTH 200

typedef struct
{
    int id;
    int dni;
} binStruct;



int main(int argc, char const *argv[])
{
    FILE *f;
    binStruct indiceBinario [MAXLENGTH];
    int auxDni, undefi;
    char undef1 [MAXLENGTH];
    int i = 0;

    f = fopen("textos2/personas.csv", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo\n");
        return 1;
    }
    
    //Leo el encabezado
    char a[100];
    fgets(a, 100, f); 
    puts(a);
    printf("%d", fscanf(f, "%d;%d;%s;%s;%s;%s;%s;%s\n",&undefi,  &auxDni, &undef, &undef, &undef, &undef, &undef, &undef));


    while (fscanf(f, "%d;%d;%s;%s;%s;%s;%s;%s\n",&undefi,  &auxDni, &undef, &undef, &undef, &undef, &undef, &undef) == 8) // Para evitar leer algo que no tiene el formato adecuado
    {
        printf("Posicion en csv: %d\n", ftell(f));
        printf("Dni: %d\n", auxDni);
        indiceBinario[i].id = ftell(f);
        indiceBinario[i].dni = auxDni;
        i++;
    }
    int aux = 4;
    fclose(f);

    return 0;
}