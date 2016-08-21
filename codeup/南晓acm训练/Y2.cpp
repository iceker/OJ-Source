#include <stdio.h>
#include <stdlib.h>

int n,i,f[5000000];

int main()
{
	scanf("%d",&n);
	f[1]=1;
	f[2]=1;
	for(i=3;i<=n;i++)
		f[i]=(f[i-1]+f[i-2])%10007;
	printf("%d",f[n]);
	return 0;
}
