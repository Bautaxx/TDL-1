#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LONG 100

struct listaStruct
{
    char dato[LONG];
    struct listaStruct *sig;
};

typedef struct listaStruct lista;
typedef lista *ptrLista;

ptrLista ini_lista()
{
    ptrLista auxPtr;
    auxPtr = NULL;
    return auxPtr;
}

int buscar(ptrLista l,char dato []){
    int encontrado = 1;
    while(l != NULL && encontrado){
        encontrado = strcmp(l->dato, dato);
        l = l->sig;
    }
    return encontrado;
}

void insertar_inicio(ptrLista *l, char dato[])
{
    ptrLista aux;
    aux = (ptrLista)malloc(sizeof(lista));
    if (aux != NULL)
    { // Hay espacio para el nodo
        strcpy(aux->dato, dato);
        aux->sig = (*l);
        *l = aux;
    }
}

void insertar_final(ptrLista *l, char dato[])
{
    ptrLista aux;
    aux = (ptrLista)malloc(sizeof(lista));
    if (aux != NULL)
    { // Hay espacio para el nodo
        strcpy(aux->dato, dato);
        aux->sig = NULL;
        ptrLista act, ant;
        act = *l;
        ant = NULL;
        while (act != NULL)
        {
            ant = act;
            act = act->sig;
        }
        if (ant == NULL)
        {
            *l = aux;
        }
        else
        {
            ant->sig = aux;
        }
    }
}

int tamanio(ptrLista l)
{
    int i = 0;
    while (l != NULL)
    {
        i++;
        l = l->sig;
    }
    return i;
}

void imprimir(ptrLista l)
{
    while (l != NULL)
    {
        printf("%s\n", l->dato);
        l = l->sig;
    }
}
void liberar_memoria(ptrLista  * l){
    ptrLista aux;
    while (l != NULL)
    {
        aux = (*l);
        (*l) = (*l) -> sig;
        free(*l);
    }
    
}

int main(int argc, char const *argv[])
{
    ptrLista l;
    l = NULL;
    FILE * f;
    char linea[LONG];

    f = fopen("textos/Lectura1.txt", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo\n");
        return 1;
    }
    
    while (fscanf(f, "%s\n", &linea) > 0) //Para evitar leer algo que no tiene el formato adecuado
    {
        insertar_final(&l, linea);
    }
    fclose(f);
    gets(linea);
    while(strcmp(linea, "ZZZ")){
        if(!buscar(l, linea)){
            printf("Dato encontrado en diccionario\n");
        }else{
            printf("Dato no encontrado en diccionario\n");
        }
        gets(linea);
    }
    return 0;
}
