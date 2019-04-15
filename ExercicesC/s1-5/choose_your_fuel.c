#include <stdio.h>

int main()
{
    char result;
    printf("Choose your fuel (A, B or C):\t");
    scanf("%c", &result);
    switch(result){
    case 'A':
        printf("Help your self with UL95");
        break;
    case 'B':
        printf("Help your self with UL98");
        break;
    case 'C':
        printf("Help your self with gazoil");
        break;
    default:
        printf("Help your self with a brain");
    }
    return 0;
}
