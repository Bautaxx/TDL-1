#include <stdio.h>
#include <stdlib.h>

int res_mem(double **arr_dinamico, int *n)
{
    int d = 0;
    printf("Ingrese dimension del arreglo: ");
    scanf("%d", n);
    if (n < 0)
        d = 1;
    else
    {
        (*arr_dinamico) = (double *)malloc((*n) * sizeof(double));
    }
    if ((*arr_dinamico) == NULL)
    {
        d = 1;
    }
    return d;
}

void ini_arr(double arr_dinamico [], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%lf", &arr_dinamico[i]);
    }
}

double prom(double * arr_dinamico, int size){
    double res = 0;
    int i;
    for(i = 0; i < size; i ++){
        res += *(arr_dinamico + i);
    }
    return (res/size);

}

int main(int argc, char const *argv[])
{
    double *arr_dinamico;
    int n, d = 0;
    d = res_mem(&arr_dinamico, &n);
    if (d == 0)
    {
        ini_arr(arr_dinamico, n);
        printf("El promedio de todo es %lf", prom(arr_dinamico, n));
        return 0;
    }
    else return 1;
}
