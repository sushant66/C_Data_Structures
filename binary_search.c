/* Binary Search*/

#include <stdio.h>


int binary_search(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r-l)/2;
        if (arr[mid] == x){
            return mid;
        }
        else if (x > mid){
            return binary_search(arr, mid+1, r, x);
        }
        else{
            return binary_search(arr, l, mid-1, x);
        }
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int a= binary_search(arr,0,5,7);
    printf("%d", a);
    return 0;
}

