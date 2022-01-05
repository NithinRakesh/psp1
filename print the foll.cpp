#include <stdio.h>
int main ()
{
	int i,j,rows;
	printf("enter the number=");
	scanf("%d",&rows);
	for (i=1;i<=rows;++i)
	{
		for(j=2;j<=rows;++j)
		{
			printf("*");
		}
		printf("/n");
	}
	return 0;
}
