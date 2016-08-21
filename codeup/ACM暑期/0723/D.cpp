#include <stdio.h> 

int a[10]={6,2,5,5,4,5,6,3,7,6};
int b[1000];

int c(int num)
{
	int sum=0;
	if(num==0) return 6;
	int temp;
	while(num>0)
	{
		temp=num%10;
		sum+=a[temp];
		num/=10;
	}
	return sum;
}


int main()
{
	int N;
	
	int k=0;
	
	int ans=0;
	
	scanf("%d",&N);
	
	for(int i=0;i<1000;i++)
		for(int j=0;j<1000;j++)
		{
			
			if(N==(c(i)+c(j)+c(i+j)+4))
			{
				ans++;
			
			}
		}
	

	printf("%d\n",ans);
	return 0;
}
