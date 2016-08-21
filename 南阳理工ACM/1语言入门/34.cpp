#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int x;
	int i;
	for( i=11;i<100;i++)
	{
		
		if((i-a)%3==0&&(i-b)%5==0&&(i-c)%7==0)
		{
			printf("%d ",i);
			break;
		}
	}
	
	if(i>=100)
	{
		printf("No answer");
	}
	
	return 0;
}
