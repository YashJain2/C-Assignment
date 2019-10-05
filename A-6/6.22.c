#include <stdio.h>
int main ()
{
int i,j,t1,t2,next;
t1=5,t2=3;
for (i=0;i<6;i++)
{
printf ("%d%d",t1,t2);
for (j=0;j<=1+i;j++)
for (next = t1+t2;next<=t1+t2;)
printf ("(%d)",next);
t1=t2;
t2=next;
printf ("\n");
}
return 0;
}