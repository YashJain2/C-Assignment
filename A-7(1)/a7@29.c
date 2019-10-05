#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,n,sum=0;
	printf("Enter the value of n:");
	scanf("%d%d",&n);
	printf("Enter the value of n")
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		sum+=pow(a,b);
	}
	printf("Sum =%d",sum);
	return 0;
}