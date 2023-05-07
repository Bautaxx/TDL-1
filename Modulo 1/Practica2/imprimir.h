void imprimirArreglo(int arr[], int length);

void imprimirArreglo(int arr[], int length)
{
    int i;
    printf("[");
    for (i = 0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("]");
}