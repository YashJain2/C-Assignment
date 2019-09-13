#include <stdio.h>
int main ()
{
int n,d;
printf ("Enter the value of n\n");
scanf ("%d", &n);
d =n%10;
if (d<5){
n =n +d;
printf ("%d", n);
}
return 0;
}
