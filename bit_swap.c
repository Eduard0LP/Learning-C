#include<stdio.h>

main(void)
{
    //Exchange the value of 2 variables without using a temporary variable by using the XOR operator
    int x = 3;
    int y = 4;
    printf("x = %i\n", x);
    printf("y = %i\n", y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x = %i\n", x);
    printf("y = %i\n", y);
}