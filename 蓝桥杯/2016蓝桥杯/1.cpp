#include <stdio.h>

int main()
{
	
	int sum=0;
	int j=0;
	for(int i=1;i<=100;i++)
	{
		j=j+i;
		sum+=j;
	}
	
	printf("%d",sum);
	return 0;
}
