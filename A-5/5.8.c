#include <stdio.h>
int main()
{
int x,y,z;
for (y=0; y<11;y++)
{
for (x=1;x<=21;x++)
if (x>(7-y) && x<13 && y>=0 && y<9)
printf ("* ");
else if (y>=9 && y<11)
printf ("* ");
else
printf ("0 ");
printf ("\n");
}
return 0;
}