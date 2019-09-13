#include <stdio.h>
int main()
{
int x,y;
for (y=1;y<=6;y++)
{
for (x=0;x<30;x++)
if (y%2==1)
printf ("0 ");
else if (x%2==0 && y%2==0)
x=x+1;
printf ("* ");
if (x%2==1 && y%2==0)
x = x+2;
printf ("* ");
else
printf ("0 ");
printf ("\n");
}
return 0;
}