#include <stdio.h> 
#include <algorithm>
using namespace std;

struct A
{
	int a,b;
};

A arr[10000];

int N,M;

bool cmp(A a,A b) {
	if (a.b<b.b) return true;
	return false;
}

int isS(int n)
{
	int flag=0;
	
	if(n==1)
		return 1;
	
	for(int i=0;i<=M;i++)
	{
		for(int j=1;j<=M;j++)
		{
			if(i*i+j*j==n)
			{
				return 1;
			}
		}
	}
	
	return 0;
}

int main()
{
	scanf("%d%d",&N,&M);
	
	int length=0;
	
//	printf("%d",isS(74));
	
	int index=0;
	
	for(int i=1;i<M*M;i++)
	{	
		if(isS(i))
		{
		//	printf("%d\n",i);
			length=0;
			int k=i;
			for(int j=1;j<M*M;j++)
			{
				
				k=i;
				length=0;
				
				while(k<=M*M*2&&isS(k+j))
				{
					k+=j;
					length+=1;
					if(length>=N-1)
						break;
				}
				if(length>=N-1)
				{
					arr[index].a=i;
					arr[index].b=j;
					index++;
					//printf("%d %d\n",i,j);
				}
			}	
			
		}
	}
	
	sort(arr,arr+index,cmp);
	
	for(int i=0;i<index;i++)
	{
		printf("%d %d\n",arr[i].a,arr[i].b);
	}
	
}
