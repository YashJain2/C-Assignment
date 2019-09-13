#include <stdio.h>
int main()
{
int x,y;
for (y=1;y<=10;y++)
{
for (x=1;x<=20;x++)
if (x<=8 && y<4 )
printf ("0 ");
else if (x>14 && y>7)
printf ("0 ");
else
printf ("* ");
printf ("\n");
}
return 0;
}