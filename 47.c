#include<stdio.h>
int main()
{
   int n;
    printf("Enter n :"); scanf("%d",&n);
     int a[n],b[n],c[n];
    for(int i =1; i<=n ; i++)
    {
        printf("Enter the elements for a:"); scanf("%d",&a[i]);
    }
    for(int i =1; i<=n ; i++)
    {
        printf("Enter the elements for b:"); scanf("%d",&b[i]);
    }
    printf("The addition of both the array is :");
    for(int i =1; i<=n ; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d ",c[i]);
    }
    printf("\n");
}