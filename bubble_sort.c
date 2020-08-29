//Bubble sort Time Complexity: O(n^2) Space Complexity: O(1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int n = 5;
    int i,j;
    int temp;
    int flag;
    int cnt = 0;
    for (i=0;i<n;i++)
    {
        flag = 1;
        for(j = 0;j<n-i-1;j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 0;
            }
            cnt ++;
            if (flag == 1)
            break;
            
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    printf("\n%d", cnt);
    return 0;
}
