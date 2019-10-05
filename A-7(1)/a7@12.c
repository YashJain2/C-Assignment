#include <stdio.h>
int main()
{
	int x,y;
	char c;
	printf("Input the complex number in the form x+yi or x-yi:");
	scanf("%d%c%di",&x,&c,&y);
	if(x*y!=0)
	{
		printf("%d%c%di",x,c,y);
	}
	else if(x==0 && y!=0)
	{
		if(c==43)
		{
		printf("%di",y);
		}
		else
		{
			printf("%c%di",c,y);
		}
	}
	else
	{
		printf("%d",x);
	}
	return 0;
}