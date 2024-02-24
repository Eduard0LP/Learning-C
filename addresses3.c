#include<stdio.h>

int main(void)
{
    //Create a string and print its characters by using pointers
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}