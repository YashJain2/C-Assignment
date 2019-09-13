#include <stdio.h>
int main ()
{
int i;
for (i=20; i<=80;i++)
{
if (i<=40 && i%2==0)
printf ("%d\n", i);
if (i>=50 && i<=80 && i%2==1)
printf ("%d\n", i);

}
return 0; 
}