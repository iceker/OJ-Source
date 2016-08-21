#include <stdio.h> 

int main()
{
	int res = 0;
	for(int i=1;i<10;i++)
	for(int j=0;j<10;j++)
	for(int k=0;k<10;k++)
	for(int l=0;l<10;l++)
	for(int m=0;m<10;m++)
	{
		if(i!=4&&j!=4&&k!=4&&l!=4&&m!=4)
			res++;
	}
	
	printf("%d",res);
	
	return 0;	
}
