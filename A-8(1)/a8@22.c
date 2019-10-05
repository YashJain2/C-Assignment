#include<stdio.h>
int main()
{
	int a,sum=0,n;
	printf("Enter n greater than 11:");
	scanf("%d",&n);
	printf("Enter the no :");
	for(int i=1;i<=n;i++)
		scanf("%d",&a);
	printf("\nEnter the nos :");
	for(int i=1;i<=n;i++)
	{
		if(i<3 || i==4 || i==7 || i==7)
		sum+=a;
	}
	printf("Sum :%d",sum);
	return 0;
}