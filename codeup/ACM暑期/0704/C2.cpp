#include <stdio.h>
#include <math.h>
#include <algorithm>
#define MAX_N 1000+5
using namespace std;

int N;
int arr[MAX_N];

int b[3];

int x,y,z;

int main()
{

    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        b[arr[i]-1]++;
    }

    // printf("b[0]==%d\n",b[0]);

    for(int i=0;i<b[0];i++)
    {
        if(arr[i]!=1)
        {
            x++;
        }
    }


    for(int i=b[0];i<b[0]+b[1];i++)
    {
        if(arr[i]==3)
        {
            y++;
        }
    }

    for(int i=b[0]+b[1];i<b[0]+b[1]+b[2];i++)
    {
        if(arr[i]==2)
        {
            z++;
        }
    }


    int ans=0;



    ans = x+max(y,z);
    printf("%d\n",ans);


    return 0;
}



