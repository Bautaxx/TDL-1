#include <stdio.h>

int potencia(int base, int exp){
    if(exp == 0){
        return 1;
    }
    else{
        return base * potencia(base, exp - 1);
    }
}