#include <stdio.h>
int main ()
{
	int num;
	int bin;
	int rem =  0;
	int place = 1;
	printf("enter a decimal number");
	scanf("%d,& num");
	printf("the binary equivalent of %d is",num);
	while(num)
	{rem=num%2;
	num=num/2;
	bin=bin + (rem*place);
	place = place*10;
	}
	printf("%d",bin);
	return 0;
}
