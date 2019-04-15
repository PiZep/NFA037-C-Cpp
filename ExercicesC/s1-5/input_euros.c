#include <stdio.h>

int main()
{
    float money;
    printf("How much money do you want?\t");
    scanf("%f", &money);
    printf("\n%.2f €... Greedy bastard", money);
    return 0;
}
