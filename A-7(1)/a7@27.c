#include <stdio.h>
#include <math.h>
int main(){
	int num,a,i;
	printf("Enter a number ");
	scanf("%d",&num);
	while(a!=0){
		if((a%10)%2==0)
			i=a%10;
		a/=10;
	}
	printf("1st even digit of the number %d : %d",num,i);
	return 0;	
}