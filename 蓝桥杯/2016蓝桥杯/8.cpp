#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	
	scanf("%d",&num);
	
	for(int i=0;i<sqrt(num)+1;i++)
		for(int j=i;j<sqrt(num)+1;j++)
			for(int k=j;k<sqrt(num)+1;k++)
				for(int l=k;l<sqrt(num)+1;l++)
	{
		if(i*i+j*j+k*k+l*l==num)
		{
			printf("%d %d %d %d\n",i,j,k,l);
			return 0;
		}
	}
	
	
	return 0;
}
