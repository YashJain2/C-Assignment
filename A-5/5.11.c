#include <stdio.h>
int main()
{
int x,y,z;
for (y=-1; y<10;y++)
{
for (x=1;x<=20;x++)
if (y>=0 && y<2)
printf ("* ");
else if (x>(8-y) && x<(5+2*y) && y>=1 && y<10)
printf ("0 ");
else
printf ("* ");
printf ("\n");
}
return 0;
}