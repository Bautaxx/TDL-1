#include <stdio.h>
#include "transformaciones.h"

int binToTxt (char * texto, char * binario){
    //Apertura de ambos archivos
    FILE * fbin, * ftext;
    fbin = fopen(binario, "r");
    if(fbin == NULL){
        return 1;
    }
    ftext = fopen(texto, "w");
    if(ftext == NULL){
        return 2;
    }
    //Variables auxiliares para lectura y escritura
    info aux;
    while(fread(&aux, sizeof(info), 1, fbin) == 1){ //Si lee exitosamente entonces no termino
        fprintf(ftext, "%s | %d | %.1f\n", aux.nombre, aux.visitas, aux.valoracion);
    }
    fclose(fbin);
    fclose(ftext);
    return 0;

}