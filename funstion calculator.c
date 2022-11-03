#include<stdio.h>
int
addn (int a, int b) 
{
  
int sum;
  
sum = a + b;
  
return sum;

}


int
subs (int a, int b) 
{
  
int subt;
  
if (a > b)
    
    {
      
subt = a - b;
    
}
  
  else
    
    {
      
subt = b - a;
    
}
  
return subt;

}


int
multi (int a, int b) 
{
  
int mult;
  
mult = a * b;
  
return mult;

}


float
divi (int a, int b) 
{
  
float div;
  
if (a > b)
    
    {
      
div = a / b;
    
}
  
  else
    
    {
      
div = b / a;
    
}
  
return div;

}


void
main () 
{
  
int a, b, cho;
  
char input, y, Y;
do{
printf ("enter two numbers:a and b\n");
  
scanf ("%d%d", &a, &b);
  
printf ("choices are as follows:\n1)addn\n2)subs\n3)muti\n4)divi\n");
  
scanf ("%d", &cho);
      
switch (cho)
	
	{
	
case 1:
	  
	  {
	    
printf ("%d+%d=%d\n", a, b, addn (a, b));
	    
break;
	  
}
	
case 2:
	  
	  {
	    
printf ("%d-%d=%d\n", a, b, subs (a, b));
	    
break;
	  
}
	
case 3:
	  
	  {
	    
printf ("%dX%d=%d\n", a, b, multi (a, b));
	    
break;
	  
}
	
case 4:
	  
	  {
	    
printf ("%d/%d=%f\n", a, b, divi (a, b));
	    
break;
	  
}
}
printf ("do you want to continue:(y/n)");
scanf ("%s", &input);
}
while (input=='y'||input=='Y' );
}
