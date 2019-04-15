#include <stdio.h>

int main()
{
    float v1, v2, v3;

    printf("Set two variables v1 and v2:\t");
    scanf("%f%f", &v1, &v2);

    v3 = (v1 < v2) ? v2 : v3;
    printf("\nThe greater is:\t%f", v3);
    return 0;
}
