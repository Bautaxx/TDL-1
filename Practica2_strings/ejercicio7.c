#include "strlen.h"
#include <stdio.h>

int palindromeChecker(char str [], int length);


int main(int argc, char const *argv[])
{
    char str[] = "roor";
    printf("%d", palindromeChecker(str, strLen(str)));
    return 0;
}

int palindromeChecker(char str [], int length){
    int palindromo = 1;
    for (int i = 0; i < (length / 2); i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindromo = 0;
            break;
        }
        
    }
    return palindromo;
    
}
