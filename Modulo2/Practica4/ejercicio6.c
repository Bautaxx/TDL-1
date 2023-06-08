#include <stdio.h>
#include <stdlib.h>

struct listaStruct
{
    int dato;
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

void insertar_inicio(ptrLista *l, int dato)
{
    ptrLista aux;
    aux = (ptrLista)malloc(sizeof(lista));
    if (aux != NULL)
    { // Hay espacio para el nodo
        aux->dato = dato;
        aux->sig = (*l);
        *l = aux;
    }
    printf("Dato Insertado\n");
}

void insertar_final(ptrLista *l, int dato)
{
    ptrLista aux;
    aux = (ptrLista)malloc(sizeof(lista));
    if (aux != NULL)
    { // Hay espacio para el nodo
        aux->dato = dato;
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
        printf("%d, ", l->dato);
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
    l = ini_lista(); // Es correcto el inicializado?
    insertar_inicio(&l, 4);
    insertar_inicio(&l, 8);
    insertar_inicio(&l, 12);
    insertar_inicio(&l, 16);
    insertar_final(&l, 18);
    printf("Tamanio de Lista: %d\n", tamanio(l));
    imprimir(l);
    liberar_memoria(l);
    free(l);
}

