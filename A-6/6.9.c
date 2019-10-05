#include <stdio.h>
int main ()
{
int i,j;
for (j=1;j<7;j++)
{
for (i=1;i<8-j;i++)
printf ("%c", 64+i);
printf ("\n\t");
}
return 0;
}