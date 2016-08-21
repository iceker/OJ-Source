#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define MAX_N 100000+5

int N;
pair<int,int> itv[MAX_N];

bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first*b.second<b.first*a.second)  return true;
    else return false;
}

int main()
{

    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d%d",&itv[i].first,&itv[i].second);
    }

    sort(itv,itv+N,cmp);


    long long  ans=0;
    int time=0;

    for(int i=0;i<N;i++)
    {
        ans+=itv[i].second*time;
        time+=itv[i].first*2;
    }
    cout<<ans;
    return 0;
}
