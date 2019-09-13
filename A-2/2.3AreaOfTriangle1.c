#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
float s,area;
printf ("Enter the sides of a triangle");
scanf ("%d%d%d", &a,&b,&c);
s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s- c));
//area = s*(s-a)*(s-b)*(s- c);
//area = sqrt(area);
printf ("%f",area);
return 0;
}