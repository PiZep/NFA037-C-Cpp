#include <stdio.h>

int main()
{
    float euros;
    printf("How many money do you want? In euros...:\t");
    scanf("%f", &euros);
    printf("So you want %.2f yens.", euros / 0.0078255407);
    return 0;
}
