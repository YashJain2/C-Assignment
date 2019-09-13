#include <stdio.h>
int main()
{
int x,y,z;
for (y=1; y<=10;y++)
{
for (x=1;x<=20;x++)
if (y%2==1)
printf ("* ");
else if (y%2==0 && y<5)
printf ("0 ");
else if (y%2==0 && y>5 && x>4 && x <15)
printf ("* ");
else
printf ("0 ");
printf ("\n");
}
return 0;
}