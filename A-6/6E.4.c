#include <stdio.h>
int main()
{
int i,j;
for (j=0;j<5;j++)
{
for (i=1;i<=5-j;i++)
printf ("%c", 65+j);
printf ("\n");
}
return 0;
}