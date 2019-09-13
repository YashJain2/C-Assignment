#include <stdio.h>
int main()
{
int i;
for (i=0;i<=100;i++)
{
if ( i%2==0 &&  (i/10)%3==1  )
printf ("%d\n", i);
if (i%2==0 &&  (i/10)%3==2)
printf ("%d\n", i);
}
return 0;
}