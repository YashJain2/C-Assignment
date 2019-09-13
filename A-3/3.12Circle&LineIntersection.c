#include <stdio.h>
#include <math.h>
int main()
{
float p,q,r,a,b,c;
float Dist,area;
printf ("enter the centre of the circle(p,q) and radius of it 'r'");
scanf ("%f%f%f", &p,&q,&r);
printf ("\nAssign the constants a,b and c to equation of line ax+by+c");
scanf ("%f%f%f", &a,&b,&c);
Dist = (p*a + b*q +c)/(sqrt(a*a +b*b));
if (Dist == r)
printf ("Line touches the circle");
else if (Dist<r && Dist>-r)
{
area = (Dist*(sqrt(r*r - Dist*Dist)));
printf ("\n Line intersects the circle at two points");
printf ("%\n5.2f", area);
}
else 
printf ("\nLine do not intersects the circle");
return 0;
}