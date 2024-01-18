#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void sort(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main()
{
    int n = 10;
    int arr[10] = {5,7,3,2,1,9,8,0,4,6};
    sort(arr, n);
    for (int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}