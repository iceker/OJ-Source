#include <stdio.h> 
#include <stdio.h>
#include <math.h>

bool is_prime(int m)
{
	int i;
	int flag=1;
	if(m==1) return false;
	for(i=2;i<=sqrt(m);i++)
	{
		if(m%i==0)
		{ 
			flag = 0;
			break;
		}	
	}
	
	if(flag==1) return true;
	else return false;
}

int main()
{
	int n;
	int m;
	scanf("%d",&n);
	
	int len1=1000000, len2;
	while(n--)
	{
		scanf("%d",&m);
		if(is_prime(m))
		{
			printf("%d 0\n",m);
			continue;
		}
		for(int i=m-1;i>=2;i--)
		{
			if(is_prime(i))
			{
				len1=m-i;
				break;
			}
		}
		
		for(int i=m+1;;i++)
		{
			if(is_prime(i))
			{
				len2=i-m;
				break;
			}
		}
		
		if(len1>len2)
		{
			printf("%d %d\n",m+len2,len2);
		
		}
		else
		{
			printf("%d %d\n",m-len1,len1);
		}
	}
	
	return 0;
}
