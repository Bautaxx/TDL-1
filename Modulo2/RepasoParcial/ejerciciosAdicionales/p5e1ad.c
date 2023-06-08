#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAXLEN 50


typedef struct {
    char palabra [MAXLEN + 1];
    float dificultad;
} infoPalabra;

float analisisFrecuencia(char * str);

int main(int argc, char const *argv[])
{
    //Abro archivo de texto en modo lectura
    FILE * fText;
    fText = fopen("palabras.txt", "r");
    if(fText == NULL){
        printf("Error al abrir archivo de texto");
        return 1;
    }

    //Creo archivo binario para escritura
    FILE * fBin;
    fBin = fopen("palabras.dat", "w+");
    if(fBin == NULL){
        printf("Error al crear archivo binario");
        return 1;
    }
    
    
    char auxPalabra[MAXLEN + 1];
    infoPalabra auxInfo;
    //Leo archivo de texto y mientras escribo en binario
    while(fscanf(fText, "%s\n", auxPalabra) == 1){ //Mientras que aux reciba input
        strcpy(auxInfo.palabra, auxPalabra);
        auxInfo.dificultad = analisisFrecuencia(auxPalabra);
        fwrite(&auxInfo, sizeof(infoPalabra), 1, fBin);
    }

    //Leo FBIN para chequear pasaje correcto de informacion
    fseek(fBin, 0, SEEK_SET);
    while(fread(&auxInfo, sizeof(infoPalabra), 1, fBin) == 1){
        printf("Palabra: %s; Dificultad: %f\n", auxInfo.palabra, auxInfo.dificultad);
    }


    //Cierro archivos
    fclose(fText);
    fclose(fBin);


    return 0;
}
float analisisFrecuencia(char * str){
    static float arr [] = {12.52, 1.42, 4.68, 5.86, 13.68, 0.69, 1.01, 0.70, 6.25, 0.44, 0.01, 4.97, 3.15, 6.71, 0.31, 8.68, 2.52, 0.88, 6.87, 7.98, 4.63, 3.93, 0.90, 0.02, 0.22, 0.90, 0.52};
    float res = 0;
    int lim = strlen(str), i;
    for(i = 0; i < lim; i++){
        res += arr[str[i] - 'a'] * arr[str[i] - 'a'];
    }
    return res;
    
}