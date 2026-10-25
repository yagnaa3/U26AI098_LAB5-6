#include<stdio.h>
int main()
{
    int a[9],sum=0;
    for(int i =0 ;i<9 ;i++)
    {
        printf("Enter the elememnt for array :"); scanf("%d",&a[i]);
       
            sum += a[i];
    }
    printf("The sum of the element in array is %d",sum);
 printf("\n");
}