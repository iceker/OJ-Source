#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <algorithm>
using namespace std;  
const int N = 100000+5;  
int a[N];       
int d[N];       
char s[N];

int main()  
{  
    int t;  
    int p;  
    scanf("%d",&t);  
    for(int j=0;j<t;j++)  
    {  
    	memset(a,0,sizeof(a));
    	memset(d,0,sizeof(d));
    	memset(s,0,sizeof(s));
    	scanf("%s",s);
        //scanf("%d",&p);  
        p=strlen(s);
        for(int i = 0; i < p; i++)  
        {
            //scanf("%d",&a[i]);  
            a[i]=s[i];
        }
        
        sort(a,a+p);
        
        int len=1;
        
        for(int i=1;i<p;i++)
        {
        	if(a[i]!=a[i-1])
        	{
        		len++;
        	}
        }
        
        printf("Case #%d: %d\n",j+1,len);  
    }  
    return 0;  
}  
