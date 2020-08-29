//GCD

#include <stdio.h>

int gcd(a,b)
{
    if (b == 0 )
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int a = gcd(8,12);
    printf("%d", a);
    return 0;
}

