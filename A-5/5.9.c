#include <stdio.h>
int main()
{
int x,y,z;
for (y=0; y<9;y++)
{
for (x=1;x<=20;x++)
if (y>=0 && y<3)
printf ("* ");
else if (x>=(9-y) && x<(5+y) && y>=3 && y<9)
printf ("0 ");
else
printf ("* ");
printf ("\n");
}
return 0;
}