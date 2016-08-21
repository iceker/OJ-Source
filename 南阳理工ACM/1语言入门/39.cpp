#include <stdio.h>

int main()
{
	int n;
	int a,b,c;
	while(scanf("%d",&n)==1&&n)
	{
		a=n/100;
		b=n%100/10;
		c=n%10;
		if(a*a*a+b*b*b+c*c*c==n)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	
	return 0;
}
