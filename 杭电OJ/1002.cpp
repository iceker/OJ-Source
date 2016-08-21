#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

char a[1005];
char b[1005];
char ans[1005];

int main()
{
    int cas;
    
    scanf("%d",&cas);
    
    for(int i=1; i<=cas; i++)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        
        scanf("%s%s", a, b);
        
        printf("Case %d:\n",i);  
        printf("%s + %s = ", a, b); 
        
        int len1 = strlen(a);
        int len2 = strlen(b);
        
        for(int i=0; i<len1; i++)
            a[i] -= '0';
        for(int i=0; i<len2; i++)
            b[i] -= '0';
        
        int mid1 = len1>>1;
        int mid2 = len2>>1;
        
        for(int i=0; i<mid1; i++)
            swap(a[i], a[len1-1-i]);
        for(int i=0; i<mid2; i++)
            swap(b[i], b[len2-1-i]);    
        
        int anslen = max(len1, len2);
        
        int temp=0,sum;
        for(int i=0; i<anslen+1; i++)
        {
            sum = a[i]+b[i]+temp;
            ans[i] = sum%10;
            temp = sum/10;
            
        }
        
        while(anslen>0 && ans[anslen]==0) anslen--;
        if(anslen == 0)
        {
            printf("%d\n\n", ans[0]);
        }
        else{
            for(int i=anslen; i>-1; i--)
            {
                printf("%d", ans[i]);
            }
            printf("\n\n");
        }
    
    }
    
    
    return 0;
}
