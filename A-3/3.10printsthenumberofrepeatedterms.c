#include <stdio.h>
int main()
{
int a,b,c,d,x;
printf ("Enter five numbers");
scanf ("%d%d%d%d%d", &a,&b,&c,&d,&x);
if(x==a && x==b && x==c && x==d)
printf ("4");
else if (x==a && x==b && x==c || x==b && x==c && x==d || x==a && x==c && x==d || x==a && x==b && x==d)
printf ("3");
else if (x==a && x==b || x==a && x==c || x==a && x==d || x==b && x==c || x==b && x==d || x==c && x==d)
printf ("2");
else if (x==a || x==b || x==c || x==d)
printf ("1");
else 
printf ("0");
return 0;
}