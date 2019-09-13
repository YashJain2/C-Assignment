#include <stdio.h>
int main ()
{
int n,r;
printf ("Enter the value of n");
scanf ("%d", &n);
r = n%10;
n = n/100;
n = n*10 +r;
printf ("%d", n);
return 0;
}