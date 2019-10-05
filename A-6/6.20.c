#include <stdio.h>
int main ()
{
int i,j,k;
k=0;
for (i=0;i<6;i++)
{
for (j=0;j<=i;j++,k++)
printf ("%c", 65+k );
printf ("\n");
}
return 0;
}