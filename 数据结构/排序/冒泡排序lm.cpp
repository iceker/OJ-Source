#include <stdio.h>
#define N 5

int main()
{
	int a[N]={5,2,3,4,1};
	int t;
	
	for(int j=1;j<N;j++)
	{
		for(int i=0;i<N-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	
	for(int i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
