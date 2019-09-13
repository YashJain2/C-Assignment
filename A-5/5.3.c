#include <stdio.h>
int main()
{
int x,y;
for (y=1;y<=4;y++)
{
for (x=1;x<=10;x++)
if (y%2==1 && (x%2==1 ))
printf ("0 ");
else if (y%2==0 && x%2==0)
printf ("0 ");
else
printf ("* ");
printf ("\n");
}
return 0;
}