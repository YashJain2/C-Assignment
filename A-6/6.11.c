#include <stdio.h>
int main ()
{
int i,j,k;
for (i=0;i<6;i++)
{
for (k=0;k<6;k++)
if (k<i)
printf (" ");
else
printf ("%c", 65+k);
printf ("\n");
}
return 0;
}