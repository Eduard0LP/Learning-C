#include <stdio.h>

int main(void) 
{
    char input[100]; // Assuming a maximum length of 100 characters for a string

    printf("Give me a word: ");
    scanf("%99s", input); // Read string from user, %99s to prevent buffer overflow

    int n = 0;
    //Count the length of the string
    while (input[n] != '\0')
    {
        n++;
    }
    printf("The word is of length %i", n);

    return 0;
}