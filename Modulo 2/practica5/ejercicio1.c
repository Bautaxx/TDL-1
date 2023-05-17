#include <stdio.h>
#include <stdlib.h>
#define LONG 300
int main()
{
    FILE *f;
    char * exito;
    char linea[LONG];
    // Abrir el archivo
    f = fopen("textos/prueba.txt", "r");
    if (f == NULL) //Si la funcion fopen retorna NULL es porque no existe 'prueba.txt'
    {
        printf("\nError al abrir archivo fuente\n"); 
        return 1;
    }
    fgets(linea, LONG, f); //Agrego uno extra para ver que no este vacio el archivo
    while (!feof(f)) //Devuelve TRUE si el archivo termino
    {
        puts(linea);
        exito = fgets(linea, LONG, f); //Lee como maximo (300 - 1) caracteres del archivo f y lo almacena en linea
    }
    //hay un caso de fgets (con ENTER) donde intenta leer y cuando aparece el enter
    //linea queda con su contenido anterior.
    if(exito != NULL){
        puts(linea);
    }
    fclose(f);
    return 0;
}