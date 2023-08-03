#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[]= {1, 2, 3, 4, 5};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int a= 4;
    int result= binarySearch(arr, 0, n - 1, a);
    if(result== -1)
    {
        printf("The element is not present in the array");
    }
    else
    {
        printf("The element is not present at the index %d", result);
    }
    return 0;
}
int binarySearch(int arr[], int l, int r, int a)
{
    while(l<= r)
    {
        int m = l + (r - l) / 2;
         if (arr[m] == a)
            return m;
         if (arr[m] < a)
            l = m + 1;
         else
            r = m - 1;
    }
    return -1;
}
