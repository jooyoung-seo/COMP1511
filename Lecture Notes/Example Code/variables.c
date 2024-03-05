
#include <stdio.h>

int main(void)
{
    int number;  // declaring variable
    number = 13; // assigning a value into the variable

    int number2 = 43; // can do both at same time
    // Use a format specifier: %d (int)
    printf("The variable number is %d \n", number);

    char character = 's';
    // Use format specifier: %c (char)
    printf("The character is: %c \n", character);

    double decimal = 3.14;
    // Use format specifier: %lf (float)
    printf("The decimal is %.2lf\n", decimal);
}