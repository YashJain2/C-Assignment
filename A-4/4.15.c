#include <stdio.h>
int main()
{
int i;
for (i=0;i<=100;i++)
{
if ( (i/10)%2==0 && i%2==1)
printf ("%d\n", i);
if ( (i/10)%2==1 && i%2==0)
printf ("%d\n", i);
}
return 0;
}