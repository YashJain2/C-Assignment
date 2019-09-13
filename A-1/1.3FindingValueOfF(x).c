#include <stdio.h> 
int main ()
{
int a,b,c,fx,x;
printf ("Enter the value of a,b,c and x");
scanf("%d%d%d%d", &a,&b,&c,&x);
fx = a*x*x + b*x + c;
printf ("%d", fx);
return 0;
}