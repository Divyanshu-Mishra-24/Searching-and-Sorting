#include<stdio.h>
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter number of elements of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elemenets of array =");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unsorted Array = ");
    print(arr,n);
    printf("\n");
    printf("Sorted Array =");
    insertion(arr,n);
    print(arr,n);
}