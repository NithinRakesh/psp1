#include <stdio.h>
int main ()
{
	float principle;
	float time;
	float rate;
	float si;
	printf("enter the principle");
	scanf("%f", &principle);
	printf("enter time");
	scanf("%f", &time);
	printf("enter rate");
	scanf("%f", &rate);
	si = (principle*rate*time)/100;
	printf("simple interest = %f",si);
	return 0;
}
