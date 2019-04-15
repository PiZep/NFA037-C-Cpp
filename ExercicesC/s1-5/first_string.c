#include <stdio.h>
#include <string.h>

int main()
{
    char firstname[20];
    printf("What is your first name?\t");
    scanf("%s", &firstname);
    printf("Is your name really %s? %d letters, oh my...", firstname,
           strlen(firstname));
    return 0;
}
