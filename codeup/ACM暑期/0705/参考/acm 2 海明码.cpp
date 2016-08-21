#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <cstring>
#include <map>
using namespace std;
map<int ,bitset<8> >map1;
map<int ,bitset<8> >::iterator iter;
int n,b,d;
bool check(bitset<8>bt){		//检验该二进制对象是否满足与之前所有二进制对象汉明吗距离至少为d 
	int k=0;
	for(iter=map1.begin();iter!=map1.end();++iter){
		k=0;
		for(int index=0;index!=8;++index){
			if((iter->second)[index]!=bt[index])
				++k;
		}
		if(k<d)
			return 0;
	}
	return 1;
}
int main(){
	cin>>n>>b>>d;
	int a;
	int count=0;
	for(a=0,count=0;count!=n;++a){
		bitset<8>bt(a);
		if(check(bt)){
			map1.insert(make_pair(a,bt));
			++count;
		}
	}
	int i;
	for(i=1,iter=map1.begin();iter!=map1.end();++i,++iter){
		cout<<iter->first;
		if(i%10==0)
			cout<<endl;
		else if(i!=n)
			cout<<" ";
		if(i==n&&i%10!=0)
			cout<<endl;
	}
	return 0;
}
