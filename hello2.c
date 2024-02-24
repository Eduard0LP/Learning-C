#include <stdio.h>

// A more elaborate print hello program in which you ask the user for its name
int main(void)
{
    char answer[100];
    printf("What's your name? ");
    scanf("%99s", &answer);
    printf("hello, %s\n", answer);

    //This last part is to learn comparisons
    int x = 1;
    int y = 2;
    if (x<y)
    {
        printf("x is less than y\n");
    }
    else if (x>y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}
