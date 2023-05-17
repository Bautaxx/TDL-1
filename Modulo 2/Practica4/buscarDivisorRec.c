#include <math.h>
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

int buscar_divisores(ptrLista l, int **divisores)
{
    int *divisores;
    int dimL, lim;
    int i;
    lim = floor(sqrt(n));
    for (i = 1; i <= lim; i++)
    {
        if (!(n % i))
        {
            add_div(&divisores, i);
            if (i != (n / i))
                add_div(&divisores, n / i);
        }
    }
    return(dimL);
}

int main(int argc, char const *argv[])
{
    ptrLista l;
    l = ini_lista();

    return 0;
}
