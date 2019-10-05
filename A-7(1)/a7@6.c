#include <stdio.h>
#include <math.h>
int main(){
	float x1,y1,z1;
	printf("Enter (x1,y1,z1) for vector : xi + yj + zk ");
	scanf("%f %f %f",&x1,&y1,&z1);
	float d = sqrt(x1*x1 + y1*y1 + z1*z1);
	printf("Unit Vector of vector : %.2fi + %.2fj + %.2fk",x1/d,y1/d,z1/d);
	return 0;
}