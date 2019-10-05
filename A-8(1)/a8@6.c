#include <stdio.h>
int main()
{
	int n,sum=0,x;
	printf("The number of numbers:\n");
	scanf("%d",&n);
	printf("The %d numbers are:\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		sum+=((x%10)*10)+((x%100)/10)+((x/100)*100);
	}
	printf("And the result is:%d\n",sum);
}