#include <stdio.h> 

int main()
{
	int n;
	scanf("%d",&n);
	
	int i,j;
	while(n--)
	{
		scanf("%d%d",&i,&j);
		if(i==j)
		{
			printf("%d %d\n",i,j);
		}
		
		if(i>j)
		{
			int t;
			t=i;
			i=j;
			j=t;
		}
		
		if(i<j)
		{
			int m=i;
			for(;m>0;m--)
			{
				if(i%m==0&&j%m==0)
				{
					printf("%d %d\n",m,i*j/m);
					break;
				}
			}
		}
		
	
	}
	
	return 0;
}
