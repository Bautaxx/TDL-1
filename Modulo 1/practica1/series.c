#include <stdio.h>
#include <math.h>

int main()
{
    double log_series(double value, unsigned int n); /*Prototype for compiler*/
    double result = log_series(0.2, 3);
    printf("ln(1,2) =  %f", result);
    return 0;
}

double log_series(double value, unsigned int n)
{
    double result;
    for (int k = 0; k < n; k++)
    {
        result += (pow(-1, k) / (k + 1)) * pow(value, k + 1); /*Here goes the series*/
    }
    return result;
}