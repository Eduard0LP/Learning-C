#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //Allocate memory for a list of 3 integers
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }

    //Set the elements of the list to certain integers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //Allocate new memory space, in this case for a 4 integer list
    int *tmp = realloc(list, 4 * sizeof(int));

    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    //for (int i = 0; i < 3; i++)
    //{
    //    tmp[i] = list[i];
    //}
    //tmp[3] = 4;

    //free(list);

    //Copy the previous list to the new memory space and add an extra fourth element
    list = tmp;

    list[3] = 4;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    //Free the space
    free(list);
    return 0;
}