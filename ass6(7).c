#include<stdio.h>
int main()
{
	int x;
	int count=0;
	scanf("%d",&x);
	while(x)
	{
		count++;
		x/=10;
	}
	printf("Number of digits are %d\n",count);
	return 0;
}
