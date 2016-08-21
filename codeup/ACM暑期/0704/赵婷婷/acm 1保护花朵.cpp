#include <iostream>
#include <algorithm>
#include <stdio.h> 
using namespace std;
int n;
long long tim=0,ans=0;
struct Bull {
	long long eat,tim;
};
Bull a[100002];
bool cmp(Bull a,Bull b) {
	if (a.eat*b.tim>b.eat*a.tim) return true;
	return false;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		 scanf("%lld %lld",&a[i].tim,&a[i].eat);
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		ans+=tim*a[i].eat;
		tim+=a[i].tim*2;
	}
	cout<<ans<<endl;
	return 0;
}

