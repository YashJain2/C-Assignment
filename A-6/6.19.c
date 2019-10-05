#include <stdio.h>
int main ()
{
int i,j,k;
for (i=1;i<=6;i++)
{
for (j=0;j<=6;j++)
if (j<=6-i)
printf (" ");
else 
printf ("%c", 64+j);
printf ("\n");
}
return 0;
}