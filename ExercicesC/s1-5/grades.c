#include <stdio.h>

int main()
{
    float grade;

    printf("What is your grade?\t");
    scanf("%f", &grade);

    if (grade >= 16.0) {
        printf("Man, ooh man...");
    } else if (grade >= 14.0) {
        printf("Good enough.");
    } else if (grade >= 12.0) {
        printf("You could have done better.");
    } else if (grade >= 10.0) {
        printf("Lucky bastard.");
    } else {
        printf("Leave the house, don't ever look at me.");
    }
    return 0;
}
