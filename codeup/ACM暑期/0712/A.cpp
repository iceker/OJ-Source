#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct ST
{
    int m;
    int n;
};

ST arr[1005];
double JavaBeans=0;


bool cmp(ST a,ST b)
{
    if(a.m*b.n>b.m*a.n) return true;
    else return false;
}

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)==2&&m!=-1)
    {
        memset(arr,0,sizeof(arr));
        JavaBeans =0;

        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&arr[i].m,&arr[i].n);
        }

        sort(arr,arr+n,cmp);

        for(int i=0;i<n;i++)
        {
            if(m>=arr[i].n)
            {
                JavaBeans += arr[i].m;
                m -= arr[i].n;

            }
            else
            {
                JavaBeans += (m*(arr[i].m*1.0)/arr[i].n);
                break;
            }
        }

        printf("%.3lf\n",JavaBeans);
//        for(int i=0;i<n;i++)
//        {
//            printf("%d %d\n",arr[i].m,arr[i].n);
//        }
    }



    return 0;
}
