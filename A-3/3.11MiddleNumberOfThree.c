#include <stdio.h>
int main()
{
int a,b,c;
printf ("Enter three numbers");
scanf ("%d%d%d", &a,&b,&c);
if (b>a && b<c || b>c && b<a)
printf ("%d", b);
else if ( a>b && a<c || a>c && a<b)
printf ("%d", a);
else
printf ("%d", c);
return 0;
}