//String Reversal;

#include <stdio.h>


int main()
{
    char a[]= "Sushant";
    int i;
    char temp;
    int n= (sizeof(a)/sizeof(a[0]))-2;
    int j = n;
    for(i = 0;i<n;i++)
    {
        if (i == j)
            break;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    printf("%s", a);
    return 0;
}

