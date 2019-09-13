#include <stdio.h>
#include <math.h>
int main()
{
int vx1,vy1,vx2,vy2,vx3,vy3,a,b,c;
// int is not working 
float area,s;
printf ("Enter the vertices of triangle");
scanf ("%d%d%d%d%d%d", &vx1,&vy1,&vx2,&vy2,&vx3,&vy3);
a =sqrt((vx1-vx2)*(vx1-vx2) + (vy1-vy2)*(vy1-vy2));
b =sqrt((vx2-vx3)*(vx2-vx3) + (vy2-vy3)*(vy2-vy3));
c =sqrt((vx1-vx3)*(vx1-vx3) + (vy1-vy3)*(vy1-vy3));
printf ("%d,%d,%d", a,b,c);
s = (a+b+c)/2;
printf (",%f", s);
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf ("%f", area);
return 0; 
}