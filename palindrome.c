//palindrome

#include <stdio.h>


int main()
{
    int n = 112211;
    int x = n;
    int a = 0;
    int b;
    while(n!=0)
    {
        b = n%10;
        a = a*10 + b;
        n = n/10;
    }
    if (a == x)
    {
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    
    return 0;
}
