//Insertion sort Time Complexity: O(n^2) Space Complexity: O(1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {5,4,3,2,1};
    int n = 5;
    int i,j,temp;
    int key;
    for(i=1;i<n;i++)   
    {
        key = a[i];
        j = i-1;
        while (j>=0 && key<a[j])
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key;
        
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
