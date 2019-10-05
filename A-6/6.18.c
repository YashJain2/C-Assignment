#include <stdio.h>
int main()
{
int i,j,k;
for (i=0;i<6;i++)
{
for (j=1; j<=9;j++)
if (j<=5-i)
printf (" ");
else if (j>=5-i&&j<6)
printf ("%c", 59+j+i);
else if (j>5 && j<5+i)
printf ("%c", 69+i-j);
printf ("\n");
}
return 0;
} 