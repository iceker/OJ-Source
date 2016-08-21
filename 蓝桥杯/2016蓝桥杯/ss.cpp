#include <stdio.h>
#include <math.h>
#define N 10000+5

int main()
{
	
	int a[10]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<sqrt(n)+1;i++)
	for(int j=i;j<sqrt(n)+1;j++)
	for(int k=j;k<sqrt(n)+1;k++)
	for(int l=k;k<sqrt(n)+1;l++)
	{
		//printf("1");
		if(i*i+j*j+k*k+l*l==n)
		{
		
			printf("%d %d %d %d",i,j,k,l);
			goto A;
		}
	}
	A:
	
	return 0;
}
