#include <stdio.h>
int main()
{
int i,j,k;
for(i=0;i<6;i++)
{
for(j=0;j<6;j++)
for (k=0; k<6;k++)
if (k<=i && (i+j)<6)
printf ("%c", 65+j+i); 
printf ("\n");
}
return 0;
}