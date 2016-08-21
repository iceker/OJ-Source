#include <stdio.h> 

int arr[10000]={0};

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int i;
	int a;
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(a==arr[i])
			break;
	}
	
	if(i>=n)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d",i+1);
	}
	return 0;
}
