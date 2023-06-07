#include <stdio.h>
#include "transformaciones.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTR 50
#define CANTJUG 2

void leer_datos(info *aux);
void lectura_dat(FILE *f);
void max(FILE *f);

int main(int argc, char const *argv[])
{
    // Creamos archivo binario
    FILE *f;
    f = fopen("tenistas", "wb+");
    // Conclusion: Estaba todo bien menos el path, como ponia binarios/archivo y binarios no existia. Se producia un conflicto.
    lectura_dat(f);
    fseek(f, 0, SEEK_SET);
    fclose(f);
    if(argc != 3){
        printf("Menos argumentos de los esperados");
        return 1;
    }
    else{
        binToTxt(argv[1], argv[2]);
        FILE * f;
        f = fopen(argv[1], "r");
        //No deberia haber errores 
        if(f == NULL){
            printf("Error al abrir archivo de texto desde main.c");
            return 1;
        }
        char aux [200];
        fgets(aux, 100, f);
        while(!feof(f)){
            puts(aux);
            fgets(aux, 100, f);
        }
        fclose(f);
    }
    return 0;
}

void lectura_dat(FILE *f) // Posible error: Como le estaba pasando ** tambien desplazaba la posicion del ptr por lo que no quedaba apuntado correctamente
{
    int i;
    info aux;
    for (i = 0; i < CANTJUG; i++)
    {
        leer_datos(&aux); // Funciona Bien
        fwrite(&aux, sizeof(info), 1, (f));
    }
}

void leer_datos(info *aux)
{
    printf("Nombre: ");
    scanf("%s", aux->nombre);
    fflush(stdin);
    printf("visitas: ");
    scanf("%d", &(aux->visitas));
    fflush(stdin);
    printf("valoracion: ");
    scanf("%f", &(aux->valoracion));
    fflush(stdin);
}
