#include <stdio.h>
int main(){
	int n=0,sum=0,num=0,temp;
	printf("Enter a range for input ");
	scanf("%d",&n);
	printf("Enter numbers ");
	for(int i=0;i<n;i++){
		temp=num;
		scanf("%d",&num);
		sum+=temp*num;
	}
	printf("%d",sum);
}



















