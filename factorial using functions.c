#include<stdio.h>
int fact(int n)
{
    int fact=1; 
    for(int i=1;i<=n;i++)
    {
        fact=fact*i; 
    }
    return fact; 
}
void main()
{
    int n; 
    printf("enter number:\n"); 
    scanf("%d",&n); 
    printf("factorial of number is:%d\n",fact(n)); 
}