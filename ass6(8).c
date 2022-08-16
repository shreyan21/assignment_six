#include<stdio.h>
int main()
{
	int x,i;
	scanf("%d",&x);
	for(i=2;i<x;i++)
	if(x%i==0)
	{
		printf("It is not a prime number\n");
		break;
	}
	if(i==x)
	printf("It is a prime number\n");
	return 0;
}
