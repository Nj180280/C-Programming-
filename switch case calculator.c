//switch case calculator
#include<stdio.h>
int main()
{
    float addn,multi,divi,a,b; 
    int choice; 
    printf("enter first number"); 
    scanf("%f",&a); 
    printf("enter second number"); 
    scanf("%f",&b); 
    printf("the choices are as follows:\n1)addition\n2)subtraction\n3)multiplication\n4)division\n(any other number)-EXIT\n"); 
    printf("enter your choice\n"); 
    scanf("%d",&choice); 
    switch(choice)
    {
        case 1:
        addn=a+b; 
        printf("%f+%f=%f\n",a,b,addn); 
        break; 

        case 2:
        if(a>b)
        {
            printf("%f-%f=%f\n",a,b,a-b); 
        }
        else
        {
            printf("%f-%f=%f\n",b,a,b-a); 
        }
        break; 

        case 3:
        multi=a*b; 
        printf("%fX%f=%f\n",a,b,multi); 
        break; 

        case 4:
        divi=a/b; 
        printf("%f/%f=%f\n",a,b,divi); 

        default:
        printf("thank you"); 
        return 0; 
    }
return 0; 
}