int partition(int subArr[], int p, int r);
void quickSort(int arr[], int l, int h);
void swap(int *element1, int *element2);
void imprimirArreglo(int arr[], int length);


void quickSort(int arr[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}

int partition(int subArr[], int p, int r)
{
    int i, j, x;
    x = subArr[r];
    i = p - 1;
    for (j = p; j <= (r - 1); j++)
    {
        if (subArr[j] <= x)
        {
            i++;
            swap(&subArr[i], &subArr[j]);
        }
    }
    swap(&subArr[r], &subArr[i + 1]);
    return (i + 1);
}

void swap(int *element1, int *element2)
{
    int hold = *element1;
    *element1 = *element2;
    *element2 = hold;
}

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