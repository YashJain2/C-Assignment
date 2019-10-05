#include <stdio.h>
#include <math.h>
int main(){
	int k,x,i=0;
	printf("Enter two numbers ");
	scanf("%d %d",&k,&x);
	int a = x;
	while(a!=0){
		a/=10;
		i++;
	}
	a=pow(10,i-k);
	printf("%dth digit of the number %d : %d",k,x,(x/a)%10);
	return 0;	
}