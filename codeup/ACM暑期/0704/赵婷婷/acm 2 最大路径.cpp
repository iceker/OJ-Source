#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX(a,b) a>b?a:b
int a[1005][1005];
int n;
int f() {
	for(int i=n-1; i>0; i--) {
		for(int j=1; j<=i; j++) {
			a[i][j]+=MAX(a[i+1][j],a[i+1][j+1]);
		}
	}
	return a[1][1];
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++)
			cin>>a[i][j];
	}
	cout<<f()<<endl;
	return 0;
}
