#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size :"); scanf("%d",&n);
    int a[n],target,flag=0;
    printf("Enter the elements : ");
    for(i = 0 ; i<n ; i++) scanf("%d",&a[i]);
    printf("Enter the element for target :"); scanf("%d",&target);
    for(i = 0 ;i < n ; i++)
    {
        if(a[i] == target ) {flag = 1; break ;}
    }
    if(flag ==1) printf("The target %d is found at %d",target,i+1);
    else printf("The target %d is not found ",target);
    printf("\n");
    }
