#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1,sum=0;
	while(i<=n)
	{
		sum+=2*i;
		i++;
	}
	printf("Sum of first %d even natural numbers is %d\n",n,sum);
	return 0;
}
