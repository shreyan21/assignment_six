#include<stdio.h>
#include<math.h>
int count(int n)
{   
int count=0;
	while(n)
	{  
	    count++;
	    n/=10;
	} 
	return count;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a=(int)pow(10,count(n)-1);
	int x=0;
	while(n)
	{
		x=x+(n%10)*a;
		a=a/10;
		n/=10;
	}
	printf("Reversed number is %d\n",x);
	return 0;
	
	
}
