#include <stdio.h>

f(int n)
{
	if(n==1)
		return 1;
	else 
		return n+f(n-1);
}

int main()
{
	int n= f(100);
	
	printf("%d",n);
	
	return 0;
}
