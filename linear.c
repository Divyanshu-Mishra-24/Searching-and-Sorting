#include<stdio.h>
int main()
{
    int n,i,x,count=0;
    printf("ENter no of elements=");
    scanf("%d",&n);
    int arr[n];
    printf("ENter elements of array=");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter target =");
    scanf("%d",&x);
    for(i=0;i<=n-1;i++)
    {
        if(x==arr[i])
        {
            printf("Number is persent at index %d ",i);
            count=count+1;
        }
    }
    if(count<=0)
    {
        printf("Number not found");
    }
   
    return 0;
}