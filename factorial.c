//factorial of any number 
#include<stdio.h>
int main()
{
    int fact=1,num,i; 
    printf("enter number you want factorial for"); 
    scanf("%d",&num); 
    for(i=1;i<=num;i++)
    {
        fact=fact*i; 
    }
    printf("factorial of %d is %d\n",num,fact); 
    return 0; 
}