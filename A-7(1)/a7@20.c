#include <stdio.h>
int main(){
	int m,n,sum,a;
	printf("Enter numbers for no. of group and numbers in group ");
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a);
			sum+=a;
		}
	}
	printf("\n%d",sum);
	return 0;
}