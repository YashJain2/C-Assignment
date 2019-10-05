#include<stdio.h>
 
int main()
{
	int n,x,y,sum=0;
	printf("Enter the value n :");
	scanf("%d",&n);
	printf("\nEnter the value pair :");
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		sum+=(x*y);	
	}
	printf("\nSUm =",sum);
	return 0;
}