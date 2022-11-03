#include<stdio.h>
int rev(int n)
{
    int rn=0,a,i,revs; 
    while(n>0)
    {
    a=n%10; //3,2,1
    rn=rn*10+a; //3,32,321
    n=n/10; //12,1
    revs=rn; 
    }
    return revs; 
}
void main() 
{
    int n; 
    printf("enter number to be reversed:\n"); 
    scanf("%d",&n); 
    printf("Reversed number is:%d\n",rev(n)); 
}