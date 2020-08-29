//factorial

#include <stdio.h>

int factorial(n)
{
    if (n == 1)
    {
        return 1;
    }
    return factorial(n-1)*n;
}

int main()
{
    int a = factorial(5);
    printf("%d", a);
    return 0;
}
