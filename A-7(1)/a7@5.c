#include <stdio.h>
int main(){
	int x1,y1,z1,x2,y2,z2;
	printf("Enter (x1,y1,z1) &(x2,y2,z2) for vector : xi + yj + zk ");
	scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
	printf("Dot product of vectors : %d",x1*x2 + y1*y2 + z1*z2);
	return 0;
}