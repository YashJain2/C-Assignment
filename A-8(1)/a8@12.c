#include <stdio.h>
int main(){
	int n=0,sum=0,num=0;
	printf("Enter a range for input ");
	scanf("%d",&n);
	printf("Enter numbers ");
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num>30&&num<90)
			sum+=num;
	}
	printf("%d",sum);
}