#include <stdio.h>
int main ()
{
	int a;
	int b;
	int c;
	int multiplication;
	
	printf("welcome to multiplication");
	printf("enter three numbers");
	scanf("%d %d %d, &a, &b, &c");
	multiplication = a*b*c;
	printf("the multiplication is:%d",multiplication);
	return 0;
}
