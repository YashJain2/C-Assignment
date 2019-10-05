#include <stdio.h>
int main ()
{
int i,j,k;
k=4;
for (i=0;i<7;i++,k++)
{
for (j=0;j<=7-i;j++)
if( k<=10)
printf ("%d,",(k*j));
printf ("\n");
}
return 0;
} 