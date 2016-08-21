#include <stdio.h>
#include <algorithm>
using namespace std;

int T,M;

struct Yao
{
	int time;
	int value;
};

Yao a[100];

bool cmp(Yao a,Yao b)
{
    if(a.value*b.time>b.value*a.time) return true;
    else return false;
}

int main()
{
	scanf("%d%d",&T,&M);
	for(int i=0;i<M;i++)
	{
		scanf("%d%d",&a[i].time,&a[i].value);
	}
	sort(a,a+M,cmp);
	
//	for(int i=0;i<M;i++)
//	{
//		printf("%d%d\n",a[i].time,a[i].value);
//	}

	int ans=0;
	
	for(int i=0;i<M;i++)
	{
		if(a[i].time<=T)
		{
			ans+=a[i].value;
			T-=a[i].time;		
		}
		
	}
	printf("%d\n",ans);


	
	return 0;
}
