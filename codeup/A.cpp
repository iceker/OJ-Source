#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

void search2(int );

int C[20];
int n, tot;
int vis[3][30]={0}; 
int vib[3][30]={0};
int arr[9][9]={0};
  

int ok = 0;  

void search1(int cur)  
{  
    int i, j, ok;  
    if (cur == n)
    {  
    	search2(0);
    }  
    else for (i=0; i<n; i++)  
    {
    	if(!vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+n] && arr[cur][i])  
    	{
		       
		       vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n]=1;
		       arr[cur][i]=0;
		       search1(cur+1);
		       vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n]=0;
		       arr[cur][i]=1;
   		}
    }  
}  

void search2(int cur)  
{  
    int i, j, ok;  
    if (cur == n)
    {  
    	tot++; 
    	
    }  
    else for (i=0; i<n; i++)  
    {
    	if(!vib[0][i] && !vib[1][cur+i] && !vib[2][cur-i+n] && arr[cur][i])  
    	{   
		       vib[0][i] = vib[1][cur+i] = vib[2][cur-i+n]=1;
		       search2(cur+1);
		       vib[0][i] = vib[1][cur+i] = vib[2][cur-i+n]=0;
   		}
    }  
}  



int main()  
{  
	tot = 0;  
    memset(vis,0,sizeof(vis));  
    memset(vis,0,sizeof(vib));  
    memset(arr,0,sizeof(arr));
    scanf("%d", &n);
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	
    search1(0);
    printf("%d\n", tot);  

    return 0;  
}  

