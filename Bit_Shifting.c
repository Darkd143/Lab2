#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int isPowerOfTwoClever(unsigned int x)
{
    return ((x != 0) && !(x & (x - 1)));
}

int bsMultiply(unsigned int number, unsigned int powerOfTwo)
{
    if (!isPowerOfTwoClever(powerOfTwo))
    {
        return 0;
    }

    int numberBits = 1;
    int powerOfTwoBits = 1;

    int originalNumber = number;

    while (powerOfTwo > 1)
    {
        number = number << 1;
        powerOfTwo = powerOfTwo >> 1;
        powerOfTwoBits += 1;
    }

    while (originalNumber > 1)
    {
        originalNumber = originalNumber >> 1;
        numberBits += 1;
    }

    if (numberBits + powerOfTwoBits < 32)
    {
        return number;
    }

    return 0;
}

int main(int argc, char *argv[])
{
    unsigned int x = 0;
    unsigned int y = 0;

    printf("Enter number: ");
    scanf("%i", &x);

    printf("Enter a power of two number: ");
    scanf("%i", &y);

    int z = bsMultiply(x, y);
    printf("%i", z);

    return 0;
}
