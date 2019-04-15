#include <stdio.h>

int main()
{
    int a, b;

    a = 0;
    b = 0;

    printf("Set two integers, a & b:\t");
    scanf("%d%d", &a, &b);
    //(a > b) ? printf("a: %d", a) : printf("b: %d", b);
    if (a > b) {
        printf("a: %d", a);
    } else {
        if (a < b) {
            printf("b: %d", b);
        } else {
            printf("a = b = %d", b);
        }
    }
    return 0;
}
