#include <stdio.h>
#include <string.h>


int main()
{
	int a[10];
	memset(a,0,sizeof(a));
	int t=15;
	
	int B=4;
	int temp=0;
	
	while(temp<4)
	{
		a[temp++]=t%2;
		t=t/2;
	}
	
	for(int i=0;i<B;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
