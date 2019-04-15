#include <stdio.h>

int main()
{
    float v1;
    int v2;

    v1 = 18.378;
    v2 = v1;

    printf("Initial value of v1:\t\t\t%f\n", v1);
    printf("Value v2 after implicit conversion:\t%d\n", v2);
    printf("Value after explicti conversion:\t%d\n", (int) v1);
    printf("Value of v2 after explicit conversion:\t%.2f\n", (float) v2);

    return 0;
}
