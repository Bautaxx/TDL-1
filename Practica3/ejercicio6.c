#include <stdio.h>

// Pregunta: El orden en el que se almacena anio mes y dia de que depende, del orden de declaracion??
typedef struct fechaStruct
{
    short int anio;
    char mes;
    char dia;
} fecha;

// La union almacena todo en x cant de bytes (bytes del campo mayor) y accedemos a esos datos con cualquier campo
typedef union fechaComparacion // La union ocupara 4 bytes ya que struct e int ocupan 4 bytes.
{
    fecha fechaReal;
    int comparacion;

} fechaComp;

void leerFecha(fechaComp * unX);

int main(int argc, char const *argv[])
{
    fechaComp fecha1;
    fechaComp fecha2;

    leerFecha(&fecha1);
    leerFecha(&fecha2);
    printf("%d del %d del %d", fecha2.fechaReal.anio, fecha2.fechaReal.mes, fecha2.fechaReal.dia);
    printf("%d del %d del %d", fecha1.fechaReal.anio, fecha1.fechaReal.mes, fecha1.fechaReal.dia);
    if(fecha1.comparacion > fecha2.comparacion) printf("La fecha 1 es mayor");
    else printf("La fecha dos es mayor");
    return 0;
}

void leerFecha(fechaComp * unX)
{
    int aux;
    char aux2;
    printf("Ingrese anio: ");
    scanf("%d", &(unX->fechaReal.anio));
    fflush(stdin);
    printf("Ingrese mes: ");
    scanf("%d",  &aux);
    aux2 = (char) aux;
    (*unX).fechaReal.mes = (char)aux;
    fflush(stdin);
    printf("Ingrese dia: ");
    scanf("%d",  &aux);
    aux2 = (char) aux;
    (*unX).fechaReal.dia = (char)aux;
    
}
