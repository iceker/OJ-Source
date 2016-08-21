#include <stdio.h>

int main()
{
	
	int i;
	int n;
	scanf("%d",&i);
	for(int j=0; j<i; j++)
	{
		scanf("%d",&n);
		for(int i=0; i<=n; i++)
		{
			if(i%2!=0)
				printf("%d ",i);
		}
		
		printf("\n");
		
		for(int i=2; i<=n; i++)
		{
			if(i%2==0)
				printf("%d ",i);
		}	
		printf("\n");	
	}
	

	return 0;
}
