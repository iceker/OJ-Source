#include <stdio.h>
#define X 10000

int M,N;
int arr[1000+5];

int main()
{
	scanf("%d%d",&M,&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int ans=0;
	
	
	for(int i=0;i<N;i++)
	{
		int count=0;
		int flag=0;
		int j;
		for(j=i-1;j>=0&&count<M;j--)
		{
			if(arr[j]==X)
			{
				continue;
			}
			else
			{
				if(arr[j]==arr[i])
				{
					arr[i]=X;
					flag=1;
					break;
				}
				count++;
			}
		}
		if(flag==0)
		{
			ans++;
		}
	}
	
	printf("%d",ans);
	return 0;
}
