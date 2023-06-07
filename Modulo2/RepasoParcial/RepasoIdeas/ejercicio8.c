#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
int dato;
struct nodo * sig;
} lista;

void eliminarUltimo(lista ** l){
    lista * ant = *l;
    lista * act = ant;
    while(act->sig != NULL){
        ant = act;
        act = act->sig;
    }
    if(ant == act){ //Lista con un unico elemento
        (*l) = NULL;
    }
    ant->sig = NULL;
    free(act);
    
}

void liberarLista(lista * l){
    while(l != NULL){
        eliminarUltimo(&l);
    }
}

void agregarFinal(lista ** l, int dato){
    //CREO NODO A AGREGAR
    lista * aux;
    aux = malloc(sizeof(lista));
    aux->dato = dato;
    aux->sig = NULL;
    lista * act = *l;
    lista * ant = act;
    while(act != NULL){
        ant = act;
        act = act->sig;
    }
    //LISTA VACIA
    if(act == ant){
        (*l) = aux;
    }else{
        ant->sig = aux;
    }
}

void imprimirLista(lista * l){
    while(l != NULL){
        printf("%d -> ", l->dato);
        l = l->sig;
    }
    printf("NULL\n");
}

int main(int argc, char const *argv[])
{
    lista * l = NULL;
    agregarFinal(&l, 4);
    agregarFinal(&l, 5);
    agregarFinal(&l, 6);
    agregarFinal(&l, 7);
    imprimirLista(l);
    liberarLista(l);
    imprimirLista(l);
    //l -> 4 -> 5 -> 6 -> 7

    return 0;
}
