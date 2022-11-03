#include<stdio.h>
void main() 
{
    int n,i,b; 
    printf("enter size of array:\n"); 
    scanf("%d",&n); 
    int a[10]; 
    printf("Enter elements of array:\n"); 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("enter element to find:\n"); 
    scanf("%d",&b); 
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("element is found at position:%d\n",i+1); 
        }
    }
}