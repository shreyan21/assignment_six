#include<stdio.h>
int main()
{
	int n;
	printf("How many first natural numbers sum you want : ");
	scanf("%d",&n);
	int sum=0,i=1;
	do
	{
		sum+=i;
		i++;
		
	}while(i<=n);
	printf("Sum of first %d natural numbers is %d\n",n,sum);

	return 0;
}
