#include<stdio.h>
#include<string.h>
void main() 
{
    char s1[10],s2[10]; 
    printf("enter string 1 and 2:\n"); 
    gets(s1); 
    gets(s2); 
    printf("%s\n",strcat(s1,s2)); 
    printf("length of s2 string is:%d\n",strlen(s2));
    strcpy(s1,s2); 
    printf("updated string is:%s\n",s1); 
}