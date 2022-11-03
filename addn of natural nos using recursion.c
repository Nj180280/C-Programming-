#include<stdio.h>
int add(int n)
{
    if(n!=0)
    {
        return(n+add(n-1)); 
    }
    else
    {
        return 0; 
    }
}
void main() 
{
    int n; 
    printf("enter number of elements\n");
    scanf("%d",&n); 
    printf("%d",add(n)); 
    
}