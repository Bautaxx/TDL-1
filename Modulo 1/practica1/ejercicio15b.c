#include <stdio.h>
int factorial(int);
int main () {
    int result, n = 4;
    result = factorial(n);
    printf("%d! = %d", n, result);
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return (n * factorial(n - 1));
    }
}