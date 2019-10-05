#include <stdio.h>
int main()
{
int i,j,k,l;
k=1;
l=0;
for (i=0;i<5;i++)
{
for (j=1;j<=i+k;j++,l++)
printf ("%c ", 64+i+j);
k=k+i;	
printf ("\n");
}
return 0;
}