#ifndef CABECERA
#define CABECERA

#define LENGTH 30
typedef struct {
    char nombre [LENGTH + 1];
    int visitas;
    float valoracion;
}info;

int binToTxt(char *, char *);

#endif