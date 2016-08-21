#include <stdio.h>
#include <string.h>

int index=1;


int a[64][8];
int b[8];

int main()
{
	int N,B,D;
	
	scanf("%d%d%d",&N,&B,&D);
	
	int a[20][20];
	int b[20];
	
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	
	int x= 0;
	int y=0;
	
	int t=10;
	for(int i=1;i<10000;i++)
	{
		x=0;
		y=i;
		while(x<B)
		{
		//int t=i;
			b[x++]=y%2;
			y=y/2;
		}
		
		int p=0,q=0;
		
	
			
		int num=0,pin=0;
		for(int j=0;j<index;j++)
		{
			for(int k=0;k<B;k++)	
			{
				if(a[j][k]!=b[k])
				{
					num++;	
				}
			}
			if(num>=D)
				pin++;
			else
				break;
		}
		
		q=0;	
		if(pin>=index)
		{
			
			for(int k=0;k<B;k++)
				a[index][k]=b[k];
			index++;
		}
		
		
		
		
	//	index++;
		
		if(index==16)
		{			
			break;
		}
	
	
	}
	
		//index++;
	//}
		
	//}
	for(int i=0;i<B;i++)
		printf("%d",a[1][i]);
	
	
	return 0;
}
