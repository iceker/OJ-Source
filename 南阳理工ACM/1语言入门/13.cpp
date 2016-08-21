#include <stdio.h>

int F(int n)
{
	if(n==1||n==2)
		return 1;
	else 
		return F(n-1)+F(n-2);
}

int main()
{
	int i=1,j=1;
	int m;
	scanf("%d",&m);
	int n;
	while(m--)
	{
		scanf("%d",&n);
		printf("%d\n",F(n));
	}
	
	return 0;
}


