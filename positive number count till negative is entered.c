//positive count check
#include<stdio.h>
int main()
{
    int num,c=0,f=1; 
    printf("enter numbers\n");
    while(f<=1)
    {
        scanf("%d",&num); 
        if(num>0)
        {
            c++; 
        }
        else
        {
            f++; 
        }
    }
    printf("positive numbers count:%d\n",c); 
    return 0; 
}