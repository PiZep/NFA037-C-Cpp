#include <stdio.h>

int main()
{
    float x;
    printf("Set a value to x:\t\t");
    scanf("%f", &x);
    printf("\nResult:\t%f (3 * %f² - 1:)", 3*x*x-1, x);
    return 0;
}
