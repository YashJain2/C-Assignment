#include <stdio.h>
int main()
{
	int n,sum=0,x;
	printf("The number of numbers:\n");
	scanf("%d",&n);
	printf("The %d numbers are:\n",n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum+=i*x;
	}
	printf("And the result is:%d\n",sum);
}