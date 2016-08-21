#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int b[1000];
int main() {
	int x=0,y=0,z=0,n,ans=0;
	//memset(b,0,sizeof(b));
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&a[i]);
		b[a[i]-1]++;
	}

	for(int i=0; i<b[0]; i++) {
		if(a[i]!=1)x++;
	}

	for(int i=b[0]; i<b[0]+b[1]; i++) {
		if(a[i]==3)y++;
	}
	for(int i=(b[0]+b[1]); i<n; i++) {
		if(a[i]==2)z++;
	}
	cout<<x+max(y,z)<<endl;
	return 0;
}


