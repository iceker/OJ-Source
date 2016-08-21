#include<stdio.h>  
void hh(int x,int n);  
struct kk  
{  
    int wi;  
    int pi;  
} s[100];  
int  main()  
{  
    int i,j,n,x=1;  
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
        scanf("%d",&s[i].wi);  
    for(i=1;i<=n;i++)  
        scanf("%d",&s[i].pi);  
    for(i=1;i<n;i++)  
    {  
        for(j=1;j<=n-i;j++)  
        {  
            if(s[j].wi>s[j+1].wi || s[j].wi==s[j+1].wi && s[j].pi<s[j+1].pi)
            {  
                s[0]=s[j+1];s[j+1]=s[j];s[j]=s[0];  
            }
        }  
    }  
    for(i=1;i<=n;i++)  
        printf("%d %d\n",s[i].wi,s[i].pi);  
        
    return 0;
}
