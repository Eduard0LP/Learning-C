#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    //Ask for a string from the user
    char s[100];
    printf("s: ");
    scanf("%s", &s);

    //Check it is not null
    if (s==NULL)
    {
        return 1;
    }

    //Allocate memory for a copy of the string in another memory location
    char *t = malloc(strlen(s) + 1);

    if (t==NULL)
    {
        return 1;
    }

    //Copy the string s in t
    strcpy(t, s);

    //for (int i = 0, n = strlen(s) + 1; i < n; i++)
    //{
    //    t[i] = s[i];
    //}

    //Change t's first character into an upper letter
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    //Print both string to check that they are different
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    //Free the memory from t
    free(t);

    return 0;

}