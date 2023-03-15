#include <stdio.h>

int damePar(void);
int main()
{
    int cant_pares;
    printf("Cantidad de num pares: ");
    scanf("%d", &cant_pares);
    for (int i = 0; i < cant_pares; i++)
    {
        printf("Num: %d\n", damePar());
    }
    
    return 0;
}

int damePar(void){
    static int num_par = -2;
    num_par += 2;
    return num_par;
}

