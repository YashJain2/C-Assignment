#include <stdio.h>
int main()
{
int i,j,k;
k=1;
for (i=0;i<6;i++)
{
for (j=0;j<=i;j++)
printf ("%c",85-((3*i+i*i)/2)+j);
printf ("\n");
}
return 0;
}