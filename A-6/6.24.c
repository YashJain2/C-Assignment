#include <stdio.h>
int main ()
{
int i,j;
j=0;
for (i=0;i<=6;i++)
{
printf ("%c", 65+i+j);
j=j+i;
}
return 0;
}