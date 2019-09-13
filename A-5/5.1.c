#include <stdio.h>
int main()
{
int x,y;
for (y=1;y<=5;y++)
{
for (x=1;x<=20;x++)
if (y%2==1 || (x%2==1 ))
printf ("* ");
else
printf ("0 ");
printf ("\n");
}
return 0;
}