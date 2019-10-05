#include<stdio.h>
int main()
{
	int a,sum=0,d,n;
	printf("Enter the value n ;");
	scanf("%d",&n);
	printf("\nEnter the nos :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		d=(((a%100)/10))*(a%10);
		sum+=d;
	}
	printf("\nSum of the nos :%d",sum);
	return 0;
}