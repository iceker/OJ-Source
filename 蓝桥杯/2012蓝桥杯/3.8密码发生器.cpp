#include <stdio.h>
#include <algorithm>
#include <string.h>
#define N 105

using namespace std;
int main()
{
	int n;
	char a[N]={0};
	
	int b[N]={0};
	
	int c[N]={0};
	int d[N]={0};
	
	
	int j=0;
	scanf("%d",&n);
	while(n--)
	{
		memset(a,0,N);
		memset(b,0,N);   //注意每次把数组清00000****** 
		memset(c,0,N);
		memset(d,0,N);
		
		scanf("%s",a);
		puts(a);
		
	//	printf("%d%d---",a[0],a[8]);
	
		for(int i=0;i<6;i++)
		{
			j=i;
			while(a[j])
			{
				b[i]+=a[j];
				j=j+6;
			
			}
		}
		for(int i=0;i<6;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\n");
		
		int sum;
		
		for(int i=0;i<6;i++)
		{
			while(b[i])
			{
				c[i]+=b[i]%10;
				b[i]=b[i]/10;
			}
		}
		
		for(int i=0;i<6;i++)
		{
			while(c[i])
			{
				d[i]+=c[i]%10;
				c[i]=c[i]/10;
			}
		}
		
		
		for(int i=0;i<6;i++)
		{
			printf("%d ",d[i]);
		}
		printf("\n");
	}	
	

	
	return 0;
}
