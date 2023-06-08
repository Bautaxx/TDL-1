#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int * mem_res(unsigned int size);
void vec_ini();

int main(int argc, char const *argv[])
{
    int * arr;
    arr = mem_res(4);
    vec_ini(arr, 4);
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }

    return 0;
}


int * mem_res(unsigned int size){
    int * ptr = (int *) malloc(size * sizeof(int));
    return ptr;
}

void vec_ini(int * arr, int size){
    int i = 0;
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand();
    }
    
}


