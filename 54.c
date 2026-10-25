#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter the count :"); scanf("%d",&n);

int a[n][n],t[n][n];
for(i = 0; i < n; i++)
{ 
    for(j =0 ; j<n;j++){
    printf("Enter the value for a matrix :"); scanf("%d",&a[i][j]);}
}
printf("The matrix after transpose :\n");
     for(i = 0; i < n; i++)
     {
         for(j = 0; j < n; j++)
         {
             t[j][i] = a[i][j];
         }
     }
     for(i = 0; i < n; i++)
     {
         for(j = 0; j < n; j++)
         {
             printf("%d\t",t[i][j]);
         }
         printf("\n");
     }
    }