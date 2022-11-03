//armstrong number 
#include<stdio.h>
int main()
{
    int a,num,sum=0,x; 
    printf("enter any number"); 
    scanf("%d",&num); 
    x=num; 
    while(num>0)
    {
        a=num%10; 
        sum=sum+a*a*a; 
        num=num/10; 
    }
    if(x==sum)
    {
        printf("%d is an armstrong number",x); 
    }
    else
    {
        printf("%d is not an armstrong number",x); 
    }
    return 0; 
    
}