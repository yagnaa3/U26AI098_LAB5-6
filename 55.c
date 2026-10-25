#include<stdio.h>
int main()
{
   int n,i,j;
    printf("Enter n :"); scanf("%d",&n);
     int a[n][n],b[n][n],c[n][n];
    for(i =0; i<n ; i++)
    {
        for(j=0;j<n;j++){
        printf("Enter the elements for a:"); scanf("%d",&a[i][j]);
    }
}
    for(i =0; i<n ; i++)
    {
        for(j=0;j<n;j++){
        printf("Enter the elements for b:"); scanf("%d",&b[i][j]);
    }
}
 printf("The addition of both the array is : \n");
    for(i =0; i<n ; i++)
    {
        for(j=0;j<n;j++){
        c[i][j] = a[i][j] + b[i][j];
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
}