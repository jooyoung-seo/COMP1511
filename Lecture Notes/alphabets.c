#include <stdio.h>

int main()
{
    char startChar, targetChar;

    printf("Enter starting character: ");
    scanf(" %c", &startChar);

    printf("Enter target character: ");
    scanf(" %c", &targetChar);

    printf("Alphabets from %c to %c:\n", startChar, targetChar);

    // Function to check if a character is an alphabet (either uppercase or lowercase)
    int isAlphabet(char c)
    {
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
    }

    char currentChar = startChar;

    // Print alphabets from startChar to targetChar
    while (currentChar != targetChar)
    {
        if (isAlphabet(currentChar))
        {
            printf("%c", currentChar);
        }

        // If the currentChar reaches 'z' or 'Z', loop back to 'a' or 'A' respectively
        if (currentChar == 'z')
        {
            currentChar = 'a';
        }
        else if (currentChar == 'Z')
        {
            currentChar = 'A';
        }
        else
        {
            currentChar++;
        }

        // Stop if we reach the targetChar again
        if (currentChar == startChar)
        {
            break;
        }
    }

    // Print the target character if it's an alphabet
    if (isAlphabet(targetChar))
    {
        printf("%c", targetChar);
    }

    printf("\n");

    return 0;
}