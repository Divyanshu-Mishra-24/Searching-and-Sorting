#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_id=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_id])
            {
                min_id=j;
            }
        }
        swap(&arr[min_id],&arr[i]);
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
    printf("SOrted Array =");
    selection(arr,n);
    print(arr,n);
}