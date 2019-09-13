#include <stdio.h>
#include <math.h>
int main ()
{
float a,b,c;
float D;
printf ("Enter the values of a,b,c");
scanf ("%f%f%f", &a,&b,&c);
printf ("quadratic equation is %fx^2 +%fx + %f",a,b,c);
D = b*b - 4*a*c;
if ( D ==  0)
printf ("\nEqual root is %f", ((-b + sqrt(D))/2*a));
else if ( D > 0)
printf ("\nRoots of equation are %f & %f", ((-b + sqrt(D))/2*a),((-b - sqrt(D))/2*a));
else
D = D*-1;
printf ("\nComplex roots are %5.2f + %5.2fi & %5.2f - %5.2fi", -b/2*a , sqrt(D)/2*a , -b/2*a , sqrt(D)/2*a );
return 0;
} 	