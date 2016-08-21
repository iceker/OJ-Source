#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
	int a[4]={0};
	
	for(a[0]=20;a[0]>=1;a[0]--)
	for(a[1]=a[0]-1;a[1]>=1;a[1]--)
	for(a[2]=a[1]-1;a[2]>=1;a[2]--)
	for(a[3]=a[2]-1;a[3]>=0;a[3]--)
	{
		if(1.0/a[0]+1.0/a[1]+1.0/a[2]+1.0/a[3]==1.0)
		{
			
			printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
		}
	}
	return  0;	
}
