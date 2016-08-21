#include <stdio.h> 
#include <iostream>
using namespace std;

int main()
{
	double n;
	cin >> n;
	int f1=1,f2=1,f3=1;
	for(int i=3;i<=n;i++)
	{
		f3=(f1+f2)%10007;		
		f1=f2;
		f2=f3; 
	}
	;
	printf("%d\n",f3);

	return 0;
}
