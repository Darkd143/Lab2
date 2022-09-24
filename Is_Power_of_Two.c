#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int isPowerOfTwoClever(unsigned int x)
{
    return ((x != 0) && !(x & (x - 1)));
}

int main(int argc, char *argv[])
{
    unsigned int x = 0;

    printf("Enter number: ");
    scanf("%i", &x);

    int y = isPowerOfTwoClever(x);
    if (y == 0)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
    return 0;
}
