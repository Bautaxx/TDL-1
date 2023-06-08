#include <stdio.h>
#include <stdlib.h>
#define MODO 3

int main(int argc, char const *argv[])
{
    // Apertura de archivo como lectura
    FILE *fold;
    fold = fopen("textos/prueba.txt", "r");

    // Creacion de archivo nuevo para escritura
    FILE *fnew;
    fnew = fopen("textos/copiaPruebac.txt", "w");

    if (!fold || !fnew)
    {
        printf("Archivo no abierto");
        return 1;
    }

// a)Usando fgetc y fputc
#if MODO == 1
    char aux;
    aux = fgetc(fold);
    while (!feof(fold))
    {
        fputc(aux, fnew);
        aux = fgetc(fold);
    }
    fclose(fold);
    fclose(fnew);

// b)Usando fgets y fputs
#elif MODO == 2
    char *aux;
    int length;

    // Me posiciono en ultima posicion SEEK_END para determinar cantidad de caracteres;
    fseek(fold, 0, SEEK_END);
    length = ftell(fold);
    fseek(fold, 0, SEEK_SET);
    aux = malloc((length + 1) * sizeof(char));

    // Leo y escribo
    fgets(aux, length, fold); // Como hago para leer hasta el final y que no corte en \n
    fputs(aux, fnew);

    // Libero memoria y cierro archivos
    free(aux);
    fclose(fold);
    fclose(fnew);

// c)Usando fread y fwrite
#else
    char *aux;
    int length;

    // Me posiciono en ultima posicion SEEK_END para determinar cantidad de caracteres;
    fseek(fold, 0, SEEK_END);
    length = ftell(fold);
    fseek(fold, 0, SEEK_SET);
    aux = malloc((length + 1) * sizeof(char)); // length + 1, por caracer '\0'

    fread(aux, sizeof(char), length, fold);
    fwrite(aux, sizeof(char), length, fnew);

    free(aux);
    fclose(fold);
    fclose(fnew);
#endif

    return 0;
}
