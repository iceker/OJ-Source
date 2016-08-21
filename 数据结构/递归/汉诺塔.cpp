#include <stdio.h>


void f(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("%c--->%c\n",a,c);
		return;
	}
	
	f(n-1,a,c,b);
	f(1,a,b,c);
	f(n-1,b,a,c);
}

int main()
{
	char a='A',b='B',c='C';
	f(64,a,b,c);
	
	return 0;
}
