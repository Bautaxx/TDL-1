#include <stdio.h>

void romboide(int n);

int main(int argc, char const *argv[])
{
    romboide(5);

    return 0;
}

void romboide(int n){
    int i, j, k;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(k = 1; k <= 2 * i - 1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(i = n - 1; i >= 1; i--){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(k = 1; k <= 2 * i - 1; k++){
            printf("*");
        }
        printf("\n");
    }
}

