#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void compare(double a, double b)
{
    if (a == b)
    {
        printf("%f is equal to %f\n", a, b);
    }
    else
    {
        printf("%f is not equal to %f\n", a, b);
    }
}

int compareGood(double a, double b)
{
    double error = 1e-5;

    return fabs(a - b) < error;
}

int main(int argc, char *argv[])
{
    double f1 = 1.0;
    double f2 = 0.3 * 3 + 0.1;

    compare(f1, f2);
    // printf("%i", compareGood(f1, f2));

    return 0;
}
