#include <stdio.h>
int main()
{
    int size, i, j, temp;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements of the array :\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    i = 0;
    j = (size - 1);
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("After reverse the array we get :\n");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    return 0;
}