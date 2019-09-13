#include <stdio.h>
int main ()
{
int a,b, sum;
printf ("Enter the value of a and b");
scanf("%d%d", &a,&b);
sum = a*a + b*b*b;
printf ("%d", sum);
return 0;
}