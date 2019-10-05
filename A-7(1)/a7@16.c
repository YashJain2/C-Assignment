#include <stdio.h>
int main()
{
	int n,x=0,sum=0;
	scanf("%d;",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d,",&x);
	sum+=x;
	}
	printf("%d",sum);
}