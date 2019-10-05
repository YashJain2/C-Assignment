#include <stdio.h>
int main(){
	float a ,b ,p ,q;
	printf("Enter (a,b) & (a,b) for Complex No. : a + ib & p + iq ");
	scanf("%f %f %f %f",&a,&b,&p,&q);
	printf("Sum of complex nos. : %.2f + %.2fi",a+p,b+q);
	return 0;
}