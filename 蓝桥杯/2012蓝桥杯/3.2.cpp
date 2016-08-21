#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
	int a[6]={0};
	for(a[0]=1;a[0]<10;a[0]++)
	for(a[1]=0;a[1]<10;a[1]++)
	for(a[2]=0;a[2]<10;a[2]++)
	for(a[3]=0;a[3]<10;a[3]++)
	for(a[4]=0;a[4]<10;a[4]++)
	for(a[5]=1;a[5]<10;a[5]++)
	{
		int b=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
		int c=a[4]*10000+a[3]*1000+a[2]*100+a[1]*10+a[0];
		
		if(b*a[5]==c
			&&a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[0]!=a[4]
			&&a[1]!=a[2]&&a[1]!=a[3]&&a[1]!=a[4]
			&&a[2]!=a[3]&&a[2]!=a[4]
			&&a[3]!=a[4]
		)
		printf("%d%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4],a[5]);
		
	}
	return 0;
}
