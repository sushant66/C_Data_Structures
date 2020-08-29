//Selection sort Time Complexity: O(n^2) Space Complexity: O(1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {5,4,3,2,1};
    int n = 5;
    int i,j,temp;
    int min;
    for(i=0;i<n-1;i++)   
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if (a[j] < a[min])
            min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
