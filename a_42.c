#include<stdio.h>
int main(){
    for(int i = 1;i <= 4 ; i++)
    {
         for(int k = 5;k > i;k-- )
        {

            printf(" ");
        }
        for(int j = 1;j<=i;j++)
        {
            printf("*");
        }
        for(int j =i-1 ;j>=1 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
 for(int s = 1; s<= 3 ; s++)
{
    for(int k = 1 ; k<=s ; k++)
{
    printf(" ");
    if(k==1) printf(" ");
}
for(int u =1 ; u<= 7 - 2*s; u++ )
{
printf("*");
}
printf("\n");
}
}
