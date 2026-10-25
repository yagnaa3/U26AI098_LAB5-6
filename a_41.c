#include<stdio.h>
int main(){
    int i,j;
    for(int i = 1;i <= 4 ; i++)
    {
         for(int k = 5;k > i;k-- )
        {

            printf(" ");
        }
        for( j = 1;j<=i;j++)
        {

            printf("%d",j);
        }
        for(int j =i-1 ;j>=1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}