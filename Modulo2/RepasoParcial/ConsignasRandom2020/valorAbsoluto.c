#define ABS(a,b) ((a) > 0) ? ((a) - (b)) : -1 * ((a) - (b))
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%d", ABS(-4,2));
    return 0;
}