#include <stdio.h>
int main ()
{
int a,b,c;
printf ("Enter two three numbers of which two must be similar");
scanf ("%d%d%d", &a,&b,&c);
printf ("%d", ((a==b)?c:(a==c)?b:(b==c)?a:b));
return 0;
}