#include<stdio.h>
int transpose(int A[10][10],int r1,int c1)
{  int temp[10][10];
    int i,j; 
  for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            temp[i][j]=A[j][i]; 
        }
    }
     printf("matrix is:\n"); 
      for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
         printf("%d\t",temp[i][j]);
        }
        printf("\n"); 
    }
    return (0); 
}
void main() 
{
    int i,j,n,r1,c1; 
    printf("enter number of rows in matrix:\n");
    scanf("%d",&r1);
    printf("enter number of columns in matrix:\n");
    scanf("%d",&c1);
    int A[10][10]; 
    printf("enter elements of matrix:\n"); 
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]); 
        }
    }
    transpose(A,r1,c1);
}