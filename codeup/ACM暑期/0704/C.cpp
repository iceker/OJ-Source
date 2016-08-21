#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 10000+5
int a[N]={0};
int main()
{
     int n=0;
	//memset(a,0,N);
	scanf("%d",&n);
	
	int ans=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	   
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		int k=i;
		for(int j=k+1;j<n;j++)
		{
			if(a[k]>a[j])
			{
				k=j;
			}
		}
		//printf("%d",k);
		if(k!=i)
		{
			int t=a[i];
			a[i]=a[k];
			a[k]=t;
			ans++;
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		printf("%d",a[i]);
//	}
	
//	printf("%d\n",ans);
	return 0;
}
