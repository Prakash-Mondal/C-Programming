#include <stdio.h>
int main()
{
    float a, b, c, s, m;
    float d;
    char operator;
    printf("Enter two numbers : ");
    scanf("%f%f", &a, &b);
    printf("Enter the operator : ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        c = a + b;
        printf("%f + %f = %f", a, b, c);
        break;
    case '-':
        s = a - b;
        printf("%f - %f = %f", a, b, s);
        break;
    case '*':
        m = a * b;
        printf("%f * %f = %f", a, b, m);
        break;
    case '/':
        d = a / b;
        printf("%f / %f= %f", a, b, d);
        break;

    default:
        printf("\nEnter proper operator");
        break;
    }
    return 0;
}