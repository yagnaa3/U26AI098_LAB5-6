#include<stdio.h>
int main()
{
    int a[10],max,smax;
    printf("Enter the elememnt for array :"); scanf("%d",&a[0]);
    max = a[0];
    for(int i =1 ;i<10 ;i++)
    {
        printf("Enter the elememnt for array :"); scanf("%d",&a[i]);
    }
     for(int i =0 ;i<10 ;i++){
    if(max < a[i])
       {
        max = a[i];
       }
       for(int i =0 ;i<10 ;i++){
    if(a[i]!=max)
       {
        smax = a[i];
        break;
       }}
        for(int i = 0 ;i<10 ;i++){
     if(smax < a[i] && a[i]!= max )
       {
        smax = a[i];
       }
    }} 
    printf("Max is %d\n",max);
    printf("Second max is %d\n",smax);
}