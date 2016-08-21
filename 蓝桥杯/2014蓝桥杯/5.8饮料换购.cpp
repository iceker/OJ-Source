#include <stdio.h> 

int main()
{
	int n=0;
	
	scanf("%d",&n);
	int ans=n;
	while(n/3!=0)
	{
	   ans+=n/3;
	   n=n%3+n/3;
	}
	printf("%d",ans);
	
	return 0;
}
