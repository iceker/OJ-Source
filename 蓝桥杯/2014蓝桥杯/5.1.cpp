#include <stdio.h>

int main()
{
	for(int i=1;i<40;i++)
		for(int j=1;j<80;j++)
		{
			if(i<j&&2.3*i+1.9*j==82.3)
			{
				printf("%d%d",i,j);
			}
		}
	return 0;
}
