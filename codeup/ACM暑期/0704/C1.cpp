#include <stdio.h>
#include <string.h>
#include <algorithm>
#define MAX_N 1005
using namespace std;

int N;
int arr[MAX_N];
int b[MAX_N];

int main()
{
    scanf("%d",&N);

    memset(arr,0,sizeof(arr));

    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<N;i++)
    {
        b[i]=arr[i];
    }

    sort(b,b+N);

    int ans=0;

    for(int i=0;i<N;i++)
    {
        if(arr[i]!=b[i])
        {
            ans++;
        }
    }

    for(int i=0;i<N;i++)
    {
        printf("%d",arr[i]);
    }
    //printf("%d\n",(ans+1)/2);

    return 0;
}
