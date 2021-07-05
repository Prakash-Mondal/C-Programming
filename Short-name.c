#include <stdio.h>
int main()
{
    char str[100];
    int i, l;
    printf("Enter a Name:\n");
    gets(str);
    for (l = 0; str[l] != '\0'; l++)
        ;
    printf("Acronym of the Name is : %c.", str[0]);
    for (i = 0; i < l; i++)
    {
        if (str[i] == 32)
            printf(" %c.", str[i + 1]);
    }
    return 0;
}