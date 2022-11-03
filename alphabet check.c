#include<stdio.h>
int main()
{
    char A;
    printf("enter character you want to check alpabet for:");
    scanf("%c",&A); 
    if(A>=65&&A<=90)
    {
        printf("entered character is a capital alphabet"); 
    }
    else if(A>=97&&A<=122)
    {
        printf("entered character is a small alphabet");
    }
    else
    {
        printf("entered character is not an alphabet");
    }
    return 0; 
}