#include <stdio.h>

int main()
{
    float grade;
    printf("What is your grade?\t");
    scanf("%f", &grade);
    if (grade >= 10)
    {
        printf("OK, you passed.");
    }
    else
    {
        printf("Shaaaaaame on you.");
    }
    return 0;
}
