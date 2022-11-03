//greatest among three 
#include<stdio.h>
int main()
{
    float a,b,c; 
    printf("enter anu three numbers:"); 
    scanf("%f%f%f",&a,&b,&c); 
    if(a>b&&a>c)
    {
        printf("%f is greatest among all",a); 
    }
    else if(b>c&&b>a)
    {
        printf("%f is greatest among all",b); 
    }
    else
    {
        printf("%f is greatest among all",c); 
    }
    return 0;
}