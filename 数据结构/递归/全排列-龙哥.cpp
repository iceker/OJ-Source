#include <stdio.h>


char a[4]="abc",b[3];
int c[3]={0};


void f(int n)
{
	int i;
	if(n==3) printf("%s\n",b);
	for(i=0;i<3;i++)
	{
		if(c[i]==0)
		{
			b[n]=a[i];
			c[i]=1;
			f(n+1);
			c[i]=0;
		}
	}
}

int main()
{
	f(0);
	return 0;
}


