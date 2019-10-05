#include <stdio.h>
int main()
{
	int n,y=0,x,i=0,sum=0;
	printf("The number of numbers:\n");
	scanf("%d",&n);
	printf("The %d numbers are:\n",n);
	while(i<n)
	{
		scanf("%d",&x);
		if(x%2==0)
		{
			y++;
			sum+=y*x;
		}
		i++;
	}
	printf("And the result is:%d\n",sum);
}