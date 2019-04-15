#include <stdio.h>

int main()
{
    int A1 = 4;
    int A2;

    A2 = (++A1 + 2);
    A1 = A2++ + 1;
    printf("A1: %d, A2: %d\n", A1, A2);

    ++A1;
    printf("A1 after ++A1: %d\n", A1);
    A2 = A1--;
    printf("A1 and A2 after A2 = A1--: %d, %d\n", A1, A2);
    A2 += ++A1 - 1;
    A1 /= (A2 / 2);
    printf("After A2 += ++A1 - 1 and A1 /= (A2 / 2),\n"
           "A1 and A2: %d, %d", A1, A2);
    return 0;
}
