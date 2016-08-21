#include <stdio.h>
#include <algorithm> 
using namespace std;


int a[] = {31,0,31,30,31,30,31,31,30,31,30,31};

int f(int year)
{
	if(year%4==0&&year%100||year%400==0)
		return 1;
	else
		return 0;
}

int main()
{
	int y,m,d;
	int s=0;
	
	printf("请输入年月日：");
	scanf("%d%d%d",&y,&m,&d);
	
	

	for(int i=1900;i<y;i++)
	{
	//	printf("%d ",f(i));
		if(f(i))
			s+=366;
		else
			s+=365;
	}
	if(f(y)) a[1]=29;
	else a[1]=28;
	
	for(int i=0;i<m-1;i++)
	{
		s+=a[i];
	}
	
	s+=d;
	printf("%d",s);
	
	
	if(s%5==1||s%5==2||s%5==3)
		printf("打鱼");
	else
		printf("晒网");
	
	
	return 0;
}
