#include <stdio.h>

int main()
{
    int alpha;
    float beta;
    printf("Set a number alpha(int):");
    scanf("%d", &alpha);
    printf("Set a number beta(float):");
    scanf("%f", &beta);
    printf("Number beta with alpha decimals: %.*f", alpha, beta);
    return 0;
}
