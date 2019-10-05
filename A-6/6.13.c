#include <stdio.h>
int main ()
{
int i,j;
for (i=0;i<6;i++)
{
for (j=0;j<6;j++)
if (j<=i)
printf ("%c", 97 + j);
else 
printf ("%c", 65+j);
printf ("\n");
}
return 0;
}