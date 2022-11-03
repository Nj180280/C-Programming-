#include<stdio.h>
int main()
{
    int rn=0,num,a,x;  
    printf("enter any number"); 
    scanf("%d",&num);
    x=num;
    while(num!=0)
    {
        a=num%10; 
        rn=rn*10+a; 
        num=num/10; 
    }
    if(rn==x)
    {
        printf("number is palindrome"); 
    }
    else
    {
        printf("number is not palindrome"); 
    }
    return 0; 
}