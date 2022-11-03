void multiply(int A[12][12],int B[12][12],int r1,int c1,int c2);
 
void main()
{
    int A[12][12],B[12][12];
    int i,j,k,r1,c1,c2;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of the 1st matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //no of col of 1st mat = no of rows of 2nd mat
    printf("Enter the number of columns for 2nd matrix\n"); 
    scanf("%d",&c2);
    printf("Enter the elements of the 2nd matrix\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    
    printf("The 1st matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    multiply(A,B,r1,c1,c2);
}
 
void multiply(int A[12][12],int B[12][12],int r1,int c1,int c2)
{
    int temp[12][12],i,j,k;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            temp[i][j]=0;
            for(k=0;k<c1;k++)
            {
                temp[i][j]=temp[i][j]+A[i][k]*B[k][j];
            }
        }
    }
 
    printf("The resultant matrix formed on multiplying the two matrices\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",temp[i][j]);
        }
        printf("\n");
    }
}