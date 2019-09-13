#include <stdio.h>
#include <math.h>
int main ()
{
float a,b,c,d,e,D;
printf ("Enter the value of a,b,c,d,e");
scanf ("%f%f%f%f%f", &a,&b,&c,&d,&e);
printf ("The equation of line = %fx + %fy + %f", c,d,e);
D = (a*c + b*d + e)/sqrt(c*c + d*d);
printf ("%f", D);
return 0;
}