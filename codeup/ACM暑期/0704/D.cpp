#include <stdio.h>
#define N 1000
int W,H;
char field[100][N];



void dfs(int x,int y)
{
	
	if(x<0||x>=W||y<0||y>=H)
		return ;
	field[x][y]='.';
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y-1);
	dfs(x,y+1);
}


void solve()
{
	int res =0;
	for(int i=0;i<W;i++)
	{
		for(int j=0;j<H;j++)
		{
			if(field[i][j] == '*')
			{
				dfs(i,j);
				res++;
			}
		}
	}
	printf("%d\n",res);
}

int main()
{
	
	scanf("%d%d",&W,&H);

	
	for(int i=0;i<H;i++)
	{
		scanf("%s",field[i]);	
	}
	
	solve();
//	for(int i=0;i<H;i++)
//	{
//		printf("%s\n",field[i]);
//	}
		
	return 0;
}
