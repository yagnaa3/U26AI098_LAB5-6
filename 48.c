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
     for(int i =1; i<=n ; i++){
        c[i] = a[i]; a[i]= b[i]; b[i] = c[i];
     }
     printf("Elements of a after swapping :");
    for(int i =1; i<=n ; i++)
    {
        printf(" %d",a[i]);
    }
     printf("\n");
     printf("Elements of b after swapping :");
    for(int i =1; i<=n ; i++)
    {
        printf(" %d",b[i]);
    }
    printf("\n");
}