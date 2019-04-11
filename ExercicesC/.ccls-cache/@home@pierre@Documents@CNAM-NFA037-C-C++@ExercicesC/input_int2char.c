#include <stdio.h>

int main()
{
    int input;
    printf("Set an integer (<255):\t\t\t");
    scanf("%d", &input);
    while (input > 255)
    {
        printf("Integer must be < 255):\t");
        scanf("%d", &input);
    }
    printf("\"input\" ASCII code gives the char:\t%c", (char) input);
    return 0;
}
