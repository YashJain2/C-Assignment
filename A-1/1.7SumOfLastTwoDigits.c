#include <stdio.h>
int main ()
{
int n,n1,n2;
printf ("Enter the value of n\n");
scanf ("%d", &n);
//n = (n%100)/10 + (n%100)%10; 
n1= n%100;
n2 =n1/10 +n1%10;
printf ("%d", n2);
return 0;
}