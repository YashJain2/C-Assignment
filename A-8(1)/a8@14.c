#include <stdio.h>
int main(){
	int n,sum,num;
	printf("Enter a range for input ");
	scanf("%d",&n);
	printf("Enter numbers ");
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num%10<(num/10)%10)
			num=((num/100)*10+num%10)*10+(num/10)%10;
		sum+=num;
	}
	printf("%d",sum);
}


