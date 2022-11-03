#include<stdio.h>
int power(int x,int n)
{
    if(n==0)
    {
        return 1; 
    }
    else
    {
        return(x*power(x,n-1));
    }
}
void main() 
{
    int x,n; 
    printf("enter values of x and n:\n");
    scanf("%d%d",&x,&n); 
    printf("%d",power(x,n)); 
    
}