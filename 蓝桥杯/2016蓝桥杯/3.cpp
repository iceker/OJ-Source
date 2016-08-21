#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
	int a[10]={0};
	int res=0;
	for(int i=1;i<10;i++)
	{
		a[i-1]=i;
	}
	

	
	do
	{
		int ji=a[2]*(a[6]*100+a[7]*10+a[8]);
				
		if((a[0]*ji
		+a[1]*(a[6]*100+a[7]*10+a[8])
		+a[2]*(a[3]*100+a[4]*10+a[5]))
		==10*ji)
		{
			for(int i=0;i<9;i++)
				printf("%d ",a[i]);
			printf("\n");
			res++;
		}
	}while(next_permutation(a,a+9));
	
	
	printf("%d",res);
	
	return 0;
}


