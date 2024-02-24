#include<stdio.h>

int main(void)
{
    //Set an integer variable to 50 and a pointer to its adress in memory
    int n = 50;
    int *p = &n;
    //Go to the direction of the pointer and print the value
    printf("%i\n", *p);
}