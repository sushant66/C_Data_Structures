#include <stdio.h>


int main()
{
    int arr[] = {1,2,1,2,1,2};
    int a[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for (i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if (arr[i]==arr[j])
                break;
        }
        if (i==j)
        printf("%d\t", arr[i]);
    }
    return 0;
}

