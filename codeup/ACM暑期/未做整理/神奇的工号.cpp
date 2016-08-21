#include<iostream>  
#include<cstdio>  
#include<cstring>  
  
using namespace std;  
  
int solve(int x){  
    int cnt=0;  
    unsigned int flag=1;  
    while(flag){  
        if(x&flag)  
            cnt++;  
        flag<<=1;  
    }  
    return cnt;  
}  
  
int main(){  
  
    //freopen("input.txt","r",stdin);  
  
    int n;  
    while(~scanf("%d",&n)){  
        printf("%d\n",solve(n));  
    }  
    return 0;  
}  
