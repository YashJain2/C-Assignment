#include <stdio.h>
#include <math.h>
int main ()
{
int a,b,c,d;
printf ("Enter the value of a ,b,c and d");
scanf ("%d%d%d%d", &a,&b,&c,&d);
/*if (a>b)
{
if (a>c)
{
if (a>d)
{
printf ("%d is bigger", a);
else (b>c);
}
else (b>d);
printf ("%d is bigger", b);
}
else (c>d);
printf ("%d is bigger", c);
}
printf ("%d is bigger", d);*/

if (a>b  &&  a>c  &&  a>d)
printf ("%d is bigger", a);
else if (b>c  &&  b>d)
printf ("%d is bigger", b);
else if (c>d)
printf ("%d is bigger", c);
else
printf ("%d is bigger", d);
return 0;
}