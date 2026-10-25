#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size :"); scanf("%d",&n);
    int a[n],target,count=0;
    printf("Enter the elements : ");
    for(i = 0 ; i<n ; i++) scanf("%d",&a[i]);
    printf("Enter the element for target :"); scanf("%d",&target);
    for(i = 0 ;i < n ; i++)
    {
        if(a[i] == target ) count++;
    }
    printf("The amount of times target %d come is %d",target,count);
    printf("\n");
    }
