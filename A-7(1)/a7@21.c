#include <stdio.h>
int main(){
	int m,n,sum,product,a;
	printf("Enter numbers for no. of group and numbers in group ");
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
	    product=1;
		for(int j=0;j<m;j++){
			scanf("%d",&a);
			product*=a;
		}
		sum+=product;
	}
	printf("\n%d",sum);
	return 0;
}