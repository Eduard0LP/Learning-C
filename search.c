#include<stdio.h>

int main(void)
{
    //Set an array of numbers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n;

    //Ask the user for a number
    printf("Number: ");
    scanf("%i", &n);

    //Perform linear search of the given number on the list
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}