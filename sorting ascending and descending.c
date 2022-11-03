#include<stdio.h>
void main() 
{
    int i,j,n,temp,cho; 
    printf("enter size of array:\n"); 
    scanf("%d",&n); 
    int a[10]; 
    printf("1)ascending\n2)desceending\nenter your choice\n");
    scanf("%d",&cho); 
    printf("enter elements of array:\n"); 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    switch(cho)
    {
        case 1:
        {
          for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i]; 
                a[i]=a[j]; 
                a[j]=temp; 
                
            }
        }
    }
    printf("sorted array is:"); 
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]); 
    }  
    break; 
        }
        case 2: 
        {
            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i]<a[j])
                    {
                        temp=a[i]; 
                        a[i]=a[j]; 
                        a[j]=temp; 
                    }
                }
            }
            printf("sorted array is:"); 
            for(i=0;i<n;i++)
            {
                printf("%d",a[i]); 
            }
        }
    }
}