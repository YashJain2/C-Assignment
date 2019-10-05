#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d,r1,r2;
	printf("Entre the values of a,b,c in ax^2+bx+c=0\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
		r1=(-1*b+sqrt(d))/(2*a);
		r2=(-1*b-sqrt(d))/(2*a);
		printf("%.2lf and %.2lf is(are) the real root(s).\n",r1,r2);
	}
	else
	{
		r1=(-1*b)/(2*a);
		r2=(sqrt(-d))/(2*a);
		printf("%.2lf+i%.2lf and %.2lf-i%.2lf are the imaginary roots.\n",r1,r2,r1,r2);
	}
}