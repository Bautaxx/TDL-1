#include <stdio.h>

int main()
{
    int primes = 0;
    while (primes < 5)
    {
        int n;
        printf("Ingrese un numero natural: ");
        scanf("%d", &n);
        if (isPrime(n))
        {
            printf("El numero es primo\n");
            primes++;
        }
    }
}

int isPrime(int n)
{
    int not_prime = 0;
    for (int i = (n - 1); i > 1; i--) // Evaluo desde n - 1
    {
        not_prime = ((n % i) == 0);
        if (not_prime)
        {
            break;
        }
    }
    return (!not_prime); // Negate to respond to isPrime?
}