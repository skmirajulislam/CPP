#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
    int a;
    printf("Enter the num :");
    scanf("%d", &a);
    printf("\nFactorial of  %d number is %d\n", a, factorial(a));
    return 0;
}