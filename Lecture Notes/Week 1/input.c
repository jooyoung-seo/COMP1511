#include <stdio.h>

int main(void)
{
    int answer;
    int answer2;
    printf("Type 2 number to scan in:\n");
    scanf("%d %d", &answer, &answer2);
    printf("The numbers scanned in are: %d and %d\n", answer, answer2);

    double decimal1;
    double decimal2;
    printf("Now type 2 decimals to scan in:\n");
    scanf("%lf %lf", &decimal1, &decimal2);
    printf("The decimal numbers scanned in are: %lf and %lf\n", decimal1, decimal2);

    char character;
    printf("type soem character lil bro:\n");
    scanf(" %c", &character); // u need space here lil bro
    printf("the character u typed is: %c\n", character);
}