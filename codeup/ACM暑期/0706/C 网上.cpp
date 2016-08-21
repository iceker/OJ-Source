/* 
ID:kkkwjx1 
LANG:C++ 
TASK:ariprog 
*/  
#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <queue>  
#include <algorithm>  
using namespace std;  
int main()  
{  

    int N,M;  
    scanf("%d%d",&N,&M);  
    bool bisq[255*255*2]= {false};  
    for(int i=0; i<=M; ++i)  
        for(int j=i; j<=M; ++j)  
            bisq[i*i+j*j]=true;  
    int note[255*255*2],n=0;  
    for(int i=0; i<=2*M*M; ++i)  
        if(bisq[i]) note[n++]=i;  
    bool ok=false;  
    for(int i=1; i<=2*M*M; ++i)  
    {  
        if((N-1)*i>2*M*M) break;  
        for(int j=0; j<n; ++j)  
        {  
            bool yes=true;  
            for(int k=0; k<N; ++k)  
            {  
                int val=note[j]+k*i;  
                if(!bisq[val])  
                {  
                    yes=false;  
                    break;  
                }  
            }  
            if(yes)  
            {  
                printf("%d %d\n",note[j],i);  
                ok=true;  
            }  
        }  
    }  
    if(!ok) puts("NONE");  
    return 0;  
}  
