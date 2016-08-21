#include <stdio.h>
#include <string.h>
#define N 31


double map[N][N];
char str[N][N]; 
int n,m;

void Input()
{
	memset(map,0,sizeof(map));
	char sa[N],sb[N];
	double x;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",str[i]);
	}
	scanf("%d",&m);
	
	int j,k;
	for(int i=0;i<m;i++)
	{
		scanf("%s%lf%s",sa,&x,sb);
		for(j=1;j<=n;j++)
			if(!strcmp(str[j],sa)) break;
		for(k=1;k<=n;k++)
			if(!strcmp(str[k],sb)) break;
		map[j][k]=x;
	}
}

void floyd()
{
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(map[i][k]*map[k][j]>map[i][j])
				{
					map[i][j] = map[i][k]*map[k][j];
				}
			}
}

int main()
{
	int cas=1;
	while(scanf("%d",&n)==1&&n)
	{
		Input();
		floyd();
		printf("Case %d: ",cas++);
		int i;
		for(i=1;i<=n;i++)
			if(map[i][i]>1) break;
		if(i>n) printf("No\n");
		else printf("Yes\n");
		
	}
	
	return 0;
}
