#include<stdio.h>

int main()
{
	float x1,x2,y1,y2,m1,m2;
	printf("Enter the coordinates of the two points :");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	m1=(x1+x2)/2;
	m2=(y1+y2)/2;
	printf("\nMid points of the given points:");
	printf("(%.2f,%.2f)",m1,m2);
	return 0;
}