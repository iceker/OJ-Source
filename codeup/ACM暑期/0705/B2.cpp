#include <stdio.h>
#include <math.h> 

int arr[64];
int N,B,D;

int count=1;
int ans=0;

int solve(int x){  
    int cnt=0;  
    unsigned int flag=1;  
    while(flag){  
        if(x&flag)  
            cnt++;  
        flag<<=1;  
    }  
    return cnt;  
}  

int main()
{
//	printf("%d",solve(7^0));
//	freopen("output.txt","w",stdout);
	
	scanf("%d%d%d",&N,&B,&D);
	for(int i=1;i<=256;i++)	
	{
		ans=0;
		for(int j=0;j<count;j++)
		{
			if(solve(i^arr[j])>=D)
			{
				ans++;
			}
		}
		if(ans==count)
		{
			arr[count]=i;
			count++;	
			int cnt =0;		
			if(count==N)
			{
				for(int k=0;k<count;k++)
				{
				
//					if (cnt > 0)printf(" ");
//					printf("%d", arr[k]);
//					cnt++;
//					if (cnt == 10)
//					{
//						printf("\n");
//						cnt = 0;
//					}
					
					if(k%10==0&&k)
						printf("\n");
//					if(k==(N-1)&&k%10!=0)
//						printf("\n");
					else if((k%10==9||k==(N-1))&&k)
					{
						printf("%d",arr[k]);
					}
					
					else 
					{
						printf("%d ",arr[k]);
					}
				}
				printf("\n");
				return 0;
			}
		}
	}
	
}
