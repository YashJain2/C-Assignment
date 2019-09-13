#include <stdio.h>
int main()
{
int x,y,z;
for (y=0; y<=11;y++)
{
for (x=1;x<=17;x++)
if (x>(7-y) && x<(11+y) && y>0 && y<6)
printf ("* ");
else if (x>=(y-3) && x<(22-y) && y>=6 && y<11)
printf ("* ");
else
printf ("0 ");
printf ("\n");
}
return 0;
}