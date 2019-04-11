#include <stdio.h>

int main()
{
    char input;
    printf("Set a char:\t");
    scanf("%c", &input);
    printf("\nThe ASCII value of \"input\": %d", (int) input);
    return 0;
}
