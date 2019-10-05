#include <stdio.h>
int main()
{
	int n,y=0,x,i=0;
	printf("The number of numbers:\n");
	scanf("%d",&n);
	int count=n+1;
	printf("The %d numbers are:\n",n);
	while(i<n)
	{
		scanf("%d",&x);
		if(x%2==0 && i<=count)
		{
			count=i;
		}
		else if(i>count)
		{
			y+=x;
		}
		i++;
	}
	printf("And the result is:%d\n",y);
}