#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float f1 = 1.666666667;
    float f2 = 3.333333333;
    float f3 = 2.2;
    float f4 = 2.8;

    if ((f3 + f4) == (f1 + f2))
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}
