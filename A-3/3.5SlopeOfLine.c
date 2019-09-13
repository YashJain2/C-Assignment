#include <stdio.h>
int main ()
{
float a,b,c,slope;
printf ("Enter the values of a,b and c");
scanf ("%f%f%f", &a,&b,&c);
printf ("The equation of line is %fx + %fy + %f", a,b,c);
if (b ==0)
printf ("\nvertical line");
else
printf ("\nSlope is %f", slope);
return 0;
}