//pyramid of stars 
#include<stdio.h>
int main()
{
    int num,i,j,s; 
    printf("enter number of rows you want"); 
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(s=1;s<=(num-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n"); 
    }
    return 0; 
}