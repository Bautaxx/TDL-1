#include <stdio.h>
#include <time.h>

typedef struct structHorario
{
    unsigned int hora : 5;
    unsigned int minutos : 6;
    unsigned int segundos : 5;
} Horario;

int main(int argc, char const *argv[])
{
    Horario hora1;
    struct tm *info;

    info->tm_hour = 12;

    hora1.hora = info->tm_hour;
    printf("Hora ingresada: %d", hora1.hora);

    return 0;
}
