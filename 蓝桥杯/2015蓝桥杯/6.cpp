
#include <stdio.h>


int main()
{
	for(int i=1;i<=48;i++)
		for(int j=3;j<=48;j++)
		{
			if( (1225-i-(i+1)-j-(j+1))
				==(2015-i*(i+1)-j*(j+1)))
				printf("%d%d\n",i,j);
			
		}
	return 0;
}
