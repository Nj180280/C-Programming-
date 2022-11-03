//pattern 3
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,s,num;
    printf("enter any number"); 
    scanf("%d",&num); 
    for(i=1;i<=num;i++)
    {
        for(s=1;s<=(num-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=(floor(4*i+1)/3);j++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0; 
}