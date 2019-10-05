#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,sum=0; 
	printf("Enter the value of dimension:");
	scanf("%d",&n);
	printf("\nEnter the value of vector :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=sum+(a*a);
	}	
	printf("\nMagnitude :%d",sqrt(sum));
	return 0;
}