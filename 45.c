#include<stdio.h>
int main()
{
    int a[9],pos=0,zero=0,neg=0;
    for(int i=0 ;i <=9;i++ )
    {
        printf("Enter the number :");
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            pos++;
        }
         if(a[i]==0)
        {
            zero++;
        }
         if(a[i]<0)
        {
            neg++;
        }
    }
    printf("The total no. of Positive elements is %d\n",pos);
    printf("The total no. of Negative elements is %d\n",neg);
    printf("The total no. of Zero elements is %d\n",zero);
}