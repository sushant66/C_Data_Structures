//fibonacci  0 1 1 2 3 5 8

#include <stdio.h>


int main()
{
    int n = 5;
    int a = 0;
    int b = 1;
    int i;
    int x;
    for (i=2;i<n;i++)
    {
        x= a + b;
        a = b;
        b = x;
    }
    printf("%d\n",x);
    
    //print series
    a = 0;
    b = 1;
    for (i=0;i<n;i++)
    {
        printf("%d ",a);
        x= a + b;
        a = b;
        b = x;
    }
    return 0;
}

