#include <stdio.h>
#include <stdlib.h> //Aqui estan las funciones de memoria dinamica
void f (int * p);
int main(){
 int * ptr = NULL;
 ptr = (int *) malloc(10*sizeof(int));
 //Si lo hicieramos en en f como se pasa una copia del puntero no va a retornar la memoria alocada, le tendriamos que pasar un puntero al puntero
 printf("p = %p",ptr);
 if (ptr == NULL)
 printf("ptr es NULL\n"); 
 else
 printf("ptr no es NULL\n"); //El puntero no sera null ya que se lo hizo apuntar a ciertas direcciones de memoria usando la funcion f.
 return 0;
}

void f (int * p) {
 p = (int *) malloc(10*sizeof(int)); //Aloca a un puntero de tipo integer 10 bloques de sizeof(int) cada uno.
}
