//fabonacci series
#include<stdio.h>
int main()
{
    int num,a=0,b=1,result,i; 
    printf("enter number of terms till you want fabonacci series to be displayed");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d\n",a);
        result=a+b;
        a=b; 
        b=result; 
    }
    return 0; 
}