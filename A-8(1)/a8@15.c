#include <stdio.h>
int main(){
	int n,sum,num,sumi;
	printf("Enter a range for input ");
	scanf("%d",&n);
	printf("Enter numbers ");
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num%2==0){
			sum+=(i+1)*num;
			sumi+=i+1;
		}
	}
	printf("%.2f",(float)sum/sumi);
}


