#include <stdio.h>

int main()
{
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
	long long a, b;
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%lld%lld",&a,&b);
		printf("Case %lld:\n",i+1);
		
		printf("%lld + %lld = %lld\n",a, b, a+b);
	}
	
	return 0;
}
