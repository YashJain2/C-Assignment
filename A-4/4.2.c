#include <stdio.h>
int main()
{
int i;
for ( i=21;i<80;i++)
//for ( i=20;i<=80;i++)
{
if (i>20 && i<40 || i>50 && i%2==0)
//if (i>=20 && i<=40 || i>=50 && i%2==0)
printf ("\n%d", i);
}
return 0;
}