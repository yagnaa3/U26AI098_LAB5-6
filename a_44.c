#include<stdio.h>
int main()
{
    int a[9],sum=0,odd=0,even=0;
    for(int i =0 ;i<9 ;i++)
    {
        printf("Enter the elememnt for array :"); scanf("%d",&a[i]);
       if(a[i]%2 == 0) {
        even = even + a[i];
       }
       else {
        odd = odd + a[i];
       }
    }
    printf("Total no. of odd is %d\n",odd);
     printf("Total no. of even is %d\n",even);
}