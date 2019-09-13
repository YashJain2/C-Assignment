#include <stdio.h>
int main()
{
int n,n1,n2;
printf("Enter the value of n");
scanf ("%d", &n);
n1 =n/10;
n2 = n1%10; 
printf ("%d", n2);
return 0;
}