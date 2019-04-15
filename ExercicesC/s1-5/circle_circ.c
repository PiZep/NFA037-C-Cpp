#include <stdio.h>

int main()
{
    float pi = 3.14159265358979323846;
    float radius;

    printf("Set a radius:\t", radius);
    scanf("%f", &radius);
    printf("Circumference:\t%f", 2*pi*radius);
    return 0;
}
