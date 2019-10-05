#include <stdio.h>
int main()
{
int i,j;
for (j=1;j<=4;j++)
{
for (i=1;i<=3;i++)
printf ("%c", 64+i);
}
return 0;
}