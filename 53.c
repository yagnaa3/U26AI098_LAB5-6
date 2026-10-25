#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter the count :"); scanf("%d",&n);

int a[n][n],b[n][n],c[n][n],sum=0;
for(i = 0; i < n; i++)
{ 
    for(j =0 ; j<n;j++){
    printf("Enter the value for a matrix :"); scanf("%d",&a[i][j]);}
}
for( i = 0; i < n; i++)
{
    for(j =0 ; j<n;j++)
    {
        sum += a[i][j];
    }
}
printf("The sum is %d",sum);
printf("\n");
}