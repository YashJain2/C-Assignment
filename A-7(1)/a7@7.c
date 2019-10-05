#include <stdio.h>
int main(){
	float x1,y1,z1,x2,y2,z2;
	printf("Enter (x1,y1,z1) &(x2,y2,z2) for vector : xi + yj + zk ");
	scanf("%f %f %f %f %f %f",&x1,&y1,&z1,&x2,&y2,&z2);
	printf("Cross product of vectors : %.2fi + %.2fj + %.2fk",(y1*z2-y2*z1),-(x1*z2-x2*z1),(x1*y2-x2*y1));
	return 0;
}