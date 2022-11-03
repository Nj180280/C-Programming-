// number pyramid 
#include<stdio.h>
int main()
{
    int num,i,j,s,r=1; 
    printf("enter number of rows you want"); 
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(s=1;s<=(num-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%d",r);
            r++; 
        }
        printf("\n"); 
    }
    return 0; 
}