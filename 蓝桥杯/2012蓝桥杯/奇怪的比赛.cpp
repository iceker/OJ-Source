#include <stdio.h> 

char a[100]={0};
int count=0;
void dfs(int score,int k)
{
	
	if(k==10)
	{
		if(score==100)
		{
			count++;
			puts(a);
		}
		return;
	}
	
	a[k]='1';
	dfs(score*2,k+1);
	a[k]='0';
	dfs(score-k-1,k+1);
}


int main()
{
	dfs(10,0);
	
	printf("%d",count);
	return 0;
}
