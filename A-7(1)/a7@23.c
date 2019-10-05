#include <stdio.h>
int main(){
	int n,a,i=0;
	printf("Enter any no. ");
	scanf("%d",&n);
	a=n;
	while(a!=0){
		a /=10;
		i++;
	}
	a=n;
	for(int j=0;j<i-1;j++){
		a/=10;
		if(j>0)
			n/=10;
	}
	printf("2nd Digit of number : %d",n-a*10);
	return 0;
}