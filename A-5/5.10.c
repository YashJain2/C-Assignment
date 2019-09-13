#include <stdio.h>
int main ()
{
int x,y,n,i;
scanf ("%d",&n);
for (y=1;y<=n;y++)
{
for (x=1 ; x<=2*n-1;x++)
{
if (x>n-y && x<n+y)
printf ("* ");
else
printf ("  ");
}
printf ("\n");
}
return 0;
} 