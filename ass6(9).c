#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i=1;
	int x;
	
	scanf("%d %d",&a,&b);
	do
	{
		
		x=a*i;
		i++;
	}while(x%b!=0);
	if(x<0)
	x=-x;
		printf("LCM of %d and %d is %d\n",a,b,x);
		getch();
		return 0;
	
}
