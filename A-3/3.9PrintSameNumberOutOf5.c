#include<stdio.h>
int main ()
{
int a,b,c,d,x;
printf ("Enter five numbers of which last number must be equal to one of the first four numbers");
scanf ("%d%d%d%d%d", &a,&b,&c,&d,&x);
printf ("%d", ((a==b||b==c||c==d||a==d||a==c||b==d)?0:(x == a)?a:(x == b)?b:(x==c)?c:(x==d)?d:0));
//here 0 stands for false input
return 0;
}