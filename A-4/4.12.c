#include <stdio.h>
int main()
{
int i;
for (i=0;i<=100;i++)
{
if ( (i/10)%2==1)
printf ("%d\n", i);
}
return 0;
}