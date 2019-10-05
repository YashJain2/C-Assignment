#include<stdio.h>
int main()
{
	int sum=0,n,d,a;
	printf("Enter the value of n :");
	scanf("%d",&n);
	printF("Enter the %d nos");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		d=a%10;
		a/=100;
		a*=10;
		a+=d;
		sum+=a;
	}	
	printf("Sum =%d",sum);
	return 0;
}