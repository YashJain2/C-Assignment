#include <stdio.h>
int main(){
	int n1,n2,a,i=0,p=1;
	printf("Enter two nos. ");
	scanf("%d %d",&n1,&n2);
	a=n1;
	while(a!=0){
		a /=10;
		i++;
	}
	a=n1;
	for(int j=0;j<i-1;j++){
		a/=10;
	}
	p*=a;
	a=n2,i=0;
	while(a!=0){
		a /=10;
		i++;
	}
	a=n2;
	for(int j=0;j<i-1;j++){
		a/=10;
	}
	p*=a;
	printf("%d",p);
	return 0;
}