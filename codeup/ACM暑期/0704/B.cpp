#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <algorithm>
#define M 1000+5
using namespace std;

int a[M][M]={0};
int N=0,i=0;
int ans = 0;

void dfs(int i,int j,int sum)
{
	if(j>i)
	{
		return;
	}
	
	if(i==N-1)
	{
	//	printf("%d\n",sum);
		if(ans<sum)
			ans=sum;
		return;
	}
	//b[i++] = n+1;
	dfs(i+1,j,sum+a[i+1][j]);
	dfs(i+1,j+1,sum+a[i+1][j+1]);
}

int main()
{
	scanf("%d",&N);
	memset(a,0,sizeof(a));
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
	}
	
//	for(int i=0;i<N;i++)
//	{
//		for(int j=0;j<=i;j++)
//			printf("%d ",a[i][j]);
//		printf("\n");
//	}
	dfs(0,0,a[0][0]);
	
	printf("%d",ans);
	return 0;
}
