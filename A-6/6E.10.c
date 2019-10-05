#include <stdio.h>
int main()
{
int i,j;
for (j=0;j<5;j++)
{
for (i=0;i<=10-2*j;i++)
printf ("%c", 65);
printf ("\n");
}
return 0;
}