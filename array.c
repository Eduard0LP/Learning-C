#include<stdio.h>

const int N = 3;

int main(void)
{
    //Generate an array and print the mean of its values
    int scores[N];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    printf("Average value: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}