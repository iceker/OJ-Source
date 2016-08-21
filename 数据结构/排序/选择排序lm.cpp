#include <stdio.h>
#define N 5

int main()
{
	int a[N]={5,2,3,4,1};
	int p;
	int t;
	
	for(int i=0;i<N-1;i++)
	{
		p=i;
		for(int j=i+1;j<N;j++)	
		{
			if(a[p]>a[j])
			{
				p=j;
			}
		}
		if(p!=i)
		{
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
	}
	
	for(int i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
