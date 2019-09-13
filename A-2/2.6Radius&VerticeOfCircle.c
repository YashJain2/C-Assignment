#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r;
printf ("Enter the value of a,b and c");
scanf ("%f%f%f", &a,&b,&c);
printf ("the equation of circle is x^2 +y^2 +%fx +%fy +%f", a,b,c);
printf ("\nradius = %f", sqrt((a/2*a/2)+(b/2*b/2)-c));
printf ("\nvertices of radius are (%f,%f)", -a/2,-b/2);
return 0;
}
