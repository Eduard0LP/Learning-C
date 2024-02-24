#include<stdio.h>

int main(void)
{
    //Ask the user for 2 long floating point numbers and return its addition
    long x;
    long y;
    printf("Number 1: ");
    scanf("%li", &x);
    printf("Number 2: ");
    scanf("%li", &y);
    printf("Result: %li", x+y);
}