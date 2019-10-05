#include <stdio.h>
#include <math.h>
int main(){
	float x1,y1,x2,y2;
	char o;
	printf("Enter 2 complex nos of type : x + iy -- (x)&(/) for multiply and divide ");
	scanf("%f %f %c %f %f",&x1,&y1,&o,&x2,&y2);
	if(o == 'x'){
		int a,b;
		a = x1*x2 - y1*y2;
		b = x2*y1 + x1*y2;
	}else if(o == '/'){
		int a,b;
		a = (x1*x2 + y1*y2)/sqrt(x2*x2+y2*y2);
		b = (x2*y1 - x1*y2)/sqrt(x2*x2+y2*y2);
	}
	printf(" : %.2f + %.2fi",a,b);
	return 0;
}