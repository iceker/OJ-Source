#include <iostream>
using namespace std;
int main()
{
	long long n;
	long long  sum=0;
	cin >> n;
	if(n%2==0)
	{
		sum=(n+1)*(n/2);
	}
	else
	{
		sum=(n+1)*(n/2)+n/2+1;
	}
	cout << sum;
	return 0;
}
