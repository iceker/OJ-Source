#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;


int main()
{
	int a[10]={0};
	for(int i=0;i<10;i++)
	{
		a[i]=i;
	}
	
	
	int res=0;
	do
	{
		if(
		abs(a[0]-a[1])>1&&
		abs(a[0]-a[3])>1&&
		abs(a[0]-a[4])>1&&
		abs(a[0]-a[5])>1&&
	
		abs(a[1]-a[0])>1&&
		abs(a[1]-a[2])>1&&
		abs(a[1]-a[4])>1&&
		abs(a[1]-a[5])>1&&
		abs(a[1]-a[6])>1&&
		
		abs(a[2]-a[1])>1&&
		abs(a[2]-a[5])>1&&
		abs(a[2]-a[6])>1&&
		
		abs(a[3]-a[0])>1&&
		abs(a[3]-a[4])>1&&
		abs(a[3]-a[7])>1&&
		abs(a[3]-a[8])>1&&
		
		abs(a[4]-a[0])>1&&
		abs(a[4]-a[1])>1&&
		abs(a[4]-a[3])>1&&
		abs(a[4]-a[5])>1&&
		abs(a[4]-a[7])>1&&
		abs(a[4]-a[8])>1&&
		abs(a[4]-a[9])>1&&
		
		abs(a[5]-a[0])>1&&
		abs(a[5]-a[1])>1&&
		abs(a[5]-a[2])>1&&
		abs(a[5]-a[4])>1&&
		abs(a[5]-a[6])>1&&
		abs(a[5]-a[8])>1&&
		abs(a[5]-a[9])>1&&
		
	
		abs(a[6]-a[1])>1&&
		abs(a[6]-a[2])>1&&
		abs(a[6]-a[5])>1&&
		abs(a[6]-a[9])>1&&
		
		abs(a[7]-a[3])>1&&
		abs(a[7]-a[4])>1&&
		abs(a[7]-a[8])>1&&
		
		abs(a[8]-a[3])>1&&
		abs(a[8]-a[4])>1&&
		abs(a[8]-a[5])>1&&
		abs(a[8]-a[7])>1&&
		abs(a[8]-a[9])>1&&
		
		abs(a[9]-a[4])>1&&
		abs(a[9]-a[5])>1&&
		abs(a[9]-a[6])>1&&
		abs(a[9]-a[8])>1)
		{
			res++;
		}
		
	}while(next_permutation(a,a+10));
	
	printf("%d",res);
	return 0;
}
