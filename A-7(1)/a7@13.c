#include <stdio.h>
int main()
{
	int x,y,z;
	char a,b;
	printf("Input the vector as xi+yj+zk\n");
	scanf("%di%c%dj%c%dk",&x,&a,&y,&b,&z);
	if(x*y*z!=0)
	{
		printf("%di%c%dj%c%dk",x,a,y,b,z);
	}
	else if(x==0)
	{
		if(y==0)
		{
			if(z==0)
			{
				printf("0");
			}else if(b==43)
			{
				printf("%dk",z);
			}else
			{
				printf("%c%dk",b,z);
			}
		}else if(a==43)
		{
			if(z==0)
			{
				printf("%dj",y);
			}
			else
			{
				printf("%dj%c%dk",y,b,z);
			}
		}
		else
		{
			if(z==0)
			{
				printf("%c%dj",a,y);
			}
			else
			{
				printf("%c%dj%c%dk",a,y,b,z);
			}
		}
	}
	else if(y==0)
	{
		if(z==0)
		{
			printf("%di",x);
		}else
		{
			printf("%di%c%dk",x,b,z);
		}
	}
	else
	{
		printf("%di%c%dj\n",x,a,y);
	}
}