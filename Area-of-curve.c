#include <stdio.h>
#include <math.h>
double f(double);
double f(double x)
{
    return (x * x + 1);
}
int main()
{
    int n, i;
    double a, b, h, x, sum = 0, area;
    printf("\nEnter the lower limit (A) : ");
    scanf("%lf", &a);
    printf("\nEnter the upper limit (B) : ");
    scanf("%lf", &b);
    printf("\nEnter the no. of trapizoids : ");
    scanf("%d", &n);
    h = fabs(b - a) / n;
    for (i = 1; i < n; i++)
    {
        x = a + i * h;
        sum = sum + f(x);
    }
    area = (h / 2) * (f(a) + f(b) + 2 * sum);
    printf("\nThe area of the curve is: %lf\n", area);
    return 0;
}
