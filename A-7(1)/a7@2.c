#include <stdio.h>

int main()
{
	int a,b,c,d,e,f;
	printf("Enter value of a,b,c,d,e,f:");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	printf("\n%10d%10d",a,b);
	printf("\n%5d%5d",c,d);
	printf("%5d%5d",e,f);

	return 0;
}