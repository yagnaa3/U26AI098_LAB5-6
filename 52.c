#include<stdio.h>
int main()
{
    int a[3][3],i,j,max,min;
    for(i = 0; i<3 ; i++)
    {
        for(j = 0; j<3 ; j++)
        {
            printf("Enter the element for a:"); scanf("%d",&a[i][j]);
        }       
    }
    max = min = a[0][0];
    for(i = 0; i<3 ; i++)
    {
        for(j = 0; j<3 ; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }
    printf("The max value is %d \n",max);
    printf("The min value is %d \n",min);
}