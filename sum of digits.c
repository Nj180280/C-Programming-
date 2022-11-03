#include<stdio.h>
int main()
{
    int i,num,a,sum=0,x;
    printf("enter number you want sum of digits of");
    scanf("%d",&num);
    x=num; 
    for(i=1;i<=num;i++)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("sum of digits of %d is %d",x,sum); 
    return 0; 
}