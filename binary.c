#include <stdio.h>
int search(int arr[], int n, int target) 
{
    int left = 0;
    int right = n - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;  
        if (arr[mid] == target) 
        {
            return mid; 
        }
        if (arr[mid] < target) 
        {
            left = mid + 1;  
        } else 
        {
            right = mid - 1; 
        }
    }
    return -1;
}
int main() 
{
    int n, target;
    printf("Enter number of elements of array = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array = ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to be found = ");
    scanf("%d", &target);
    int x = search(arr, n, target);
    if (x != -1) 
    {
        printf("Element found at index = %d\n", x);
    } else 
    {
        printf("Element not found!!\n");
    }
    return 0;
}