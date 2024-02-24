#include<stdio.h>

int main(void)
{
    //Create a string and print its adress in memory
    char *s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
}