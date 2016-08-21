#include <cstdio>
#include <algorithm>
#include <iostream>
#define N 10000
using namespace std;

int main()
{
	int n;int t;
	int a[N]={0};
	int c[N]={0};
	
	c[0]=1;
	for(int i=1;i<N;i++)
	{
		c[i] = c[i-1]+i+1;
	}
	
	int b[N]={0};
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=1;i<n;i++)
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
				b[j]++;
				b[j+1]++;
			}
		}
		
	
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum+=c[a[i]-1];
	}
	
	cout << sum;
	
	
	
	return 0;
	
}
