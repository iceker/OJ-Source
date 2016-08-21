#include <stdio.h>

int f(int m,int n)
{
	if(m<n) return 0;
	if(n==0) return 1;
	//return f(m-1,n)+f(m-1,n-1);
	return f(m-1,n)+f(m,n-1);
}

int main()
{
	printf("%d",f(2,1));
	return 0;
}
