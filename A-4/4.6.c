#include <stdio.h>
int main ()
{
int i;
for (i=0; i<=100;i++)
{
if (i<20)
printf ("%d\n", i);
if (i>50 && i <70)
printf ("%d\n", i);
if (i>90)
printf ("%d\n", i);
}
return 0; 
}