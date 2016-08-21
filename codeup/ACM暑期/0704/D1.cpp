#include <stdio.h>

int W,H;
char map[1001][81];

int ans,sum;

void dfs(int x,int y)
{

    if(x<0||x>=H||y<0||y>=W)
		return ;
    if(map[x][y]=='.')
        return ;
    else if(map[x][y]=='*')
    {
        map[x][y]='.';
        sum++;
        dfs(x-1,y);
        dfs(x+1,y);
        dfs(x,y-1);
        dfs(x,y+1);
    }
}


int main()
{
    scanf("%d%d",&W,&H);
    for(int i=0;i<H;i++)
    {
        scanf("%s",map[i]);
    }

    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            sum=0;
            if(map[i][j]=='*')
            {

               dfs(i,j);

            }
            if(sum>ans) ans=sum;
            //printf("%d\n",sum);
        }
    }

    printf("%d\n",ans);



    return 0;
}
