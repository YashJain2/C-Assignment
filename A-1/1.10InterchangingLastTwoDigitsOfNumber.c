#include <stdio.h>
int main ()
{
int n, r1,r2;
printf ("Enter the value of n");
scanf("%d",&n);
r1 = n%10;
r2 = (n/10)%10;
n =n/100;
n = n *100 + (r1*10) + (r2);
// n = (n/100)*100 + ((n%10)*10) + ((n/10)%10);
printf ("%d", n);
return 0;
}