#include <stdio.h>

int main()
{
	int sum=0;
	for(int i=1;i<50;i++)
	{
		sum=0;
		for(int j=i;j<50;j++)
		{
			sum+=j;
			if(sum==236)
			{
				printf("%d %d",i,j);
				break;
			}
		}
	}
	return 0;
}
