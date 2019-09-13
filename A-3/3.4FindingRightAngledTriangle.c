#include <stdio.h>
int main ()
{
int a,b,c;
printf ("Enter the vertices of triangle");
scanf ("%d%d%d", &a,&b,&c);
if ( a*a == b*b + c*c )
printf ("The triangle is right angled");
else
printf ("The triangle is not right angled");
return 0;
}