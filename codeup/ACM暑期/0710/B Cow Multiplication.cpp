#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


char A[11]={0}, B[11]={0};
int main()
{
	
	scanf("%s%s",A,B);
	
	long long ans=0;
	
	for(int i=0;i<strlen(A);i++)
	{
		for(int j=0;j<strlen(B);j++)
		{
			ans= ans + (A[i]-'0')*(B[j]-'0');
		//	printf("%d %d\n",A[i],B[j]);
		}
	}
	
	cout<<ans;
	
	return 0;
}
