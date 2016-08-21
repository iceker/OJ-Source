#include<stdio.h>
#include<string.h>

int f(int y)
{
	if(y%4==0&&y%100!=0||y%400==0)
		return 1;
	else 
		return 0;
	
}

int main()
{
	int N;
	int sum=0;
	int a[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	int b[7]={0};
	int temp = 0;
	memset(b,0,sizeof(b));
	
	scanf("%d",&N);
	
	for(int i=1900;i<1900+N;i++)
	{
						
		if(f(i)) a[1]=29;
		else a[1]=28;
			
		for(int j=1;j<=12;j++)
		{
//			//sum+13;
			//	printf("%d\n",sum%7);
			b[(sum+13)%7]++;
			sum+=a[j-1];
		}
	}

	printf("%d ",b[6]);
	
	for(int i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	
	printf("%d\n",b[5]);
	
	return 0;	
}
