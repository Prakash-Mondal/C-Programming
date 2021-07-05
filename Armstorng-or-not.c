#include <stdio.h>
#include <math.h>
int main()
{
    int n, t, temp, digit, count = 0, rem, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    t = n, temp = n;
    while (n != 0)
    {
        digit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    while (t != 0)
    {
        rem = t % 10;
        sum = sum + pow(rem, count);
        t = t / 10;
    }
    if (sum == temp)
    {
        printf("\n %d is an Armstrong number ", temp);
    }
    else
    {
        printf("\n %d is not Armstrong number", temp);
    }
    return 0;
}
