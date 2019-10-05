#include <stdio.h>
int main(){
	int n;
	float a,b,sumR,sumI;
	char i,p='\0';
	printf("How many complex number you want to add ");
	scanf("%d",&n);
	printf("Enter %d complex number of type (a+ib) ",n);
	for(int j=0;j<n;j++){
		scanf("%f%c%c%f",&a,&p,&i,&b);
		sumR+=a;
		sumI+=b;
	}
	printf("%f+%c%f",sumR,i,sumI);

	return 0;
}