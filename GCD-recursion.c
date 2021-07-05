#include <stdio.h>
int GCD(int, int);
int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);
    printf("GCD of %d and %d is = %d", n1, n2, GCD(n1, n2));
    return 0;
}
int GCD(int x, int y)
{
    if (x == y)
        return x;
    else if (x % y == 0)
        return y;
    else if (y % x == 0)
        return x;
    else if (x > y)
        return GCD((x % y), y);
    else
        return GCD(x, (y % x));
}