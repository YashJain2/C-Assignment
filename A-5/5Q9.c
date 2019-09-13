#include <stdio.h>
int main()
{
int i,j,k;
k=0;
for (i=0;i<6;i++)
{
for (j=1;j<=i+k;j++)
printf ("%c", 65);
k=k+i;	
printf ("\n");
}
return 0;
}