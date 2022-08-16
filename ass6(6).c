#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=n-1,fact=n;
	while(i>1)
	{
		fact*=i;
		i--;
	}
	printf("Factorial of %d is %d\n",n,fact);
	return 0;
}
