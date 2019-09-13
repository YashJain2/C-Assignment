#include <stdio.h>
#include <math.h>
int main ()
{
int a,b,c;
printf ("Enter the value of a ,b and c");
scanf ("%d%d%d", &a,&b,&c);
if (a>b)
{
if (a>c)
{
printf ("%d is bigger", a);
}
else(b>c);
{
printf ("%d is bigger", b);
}
}
printf ("%d is bigger", c);
return 0;
}