#include <stdio.h>
#include <algorithm>
using namespace std;


struct A
{
	int a,b;
};

A arr[10000];

int isZhiShu(int a,int b)
{
	int temp;
	while(b!=0){
	  temp=b;
	  b=a%b;
	  a=temp;
	}
	if(a==1){
	 	return 1;
	}
	else{
	 	return 0;
	}

}


bool cmp(A a,A b) {
	if (a.a*b.b<a.b*b.a) return true;
	return false;
}

int main()
{
	int N;
	scanf("%d",&N);
	
	int k=0;
	
	for(int i=0;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			if(i<=j&&isZhiShu(i,j))
			{
				arr[k].a=i;
				arr[k].b=j;
				k++;
			}
		}
	}
	
	sort(arr,arr+k,cmp);
	
	for(int i=0;i<k;i++)
	{
		printf("%d/%d\n",arr[i].a,arr[i].b);
	}
		
	return 0;
}
