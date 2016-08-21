#include<iostream>  
#include<cstdio>  
#include<cstring>  
using namespace std;  
char s[10000000+5],result[1000];  


int main()  
{  
    long long mod,divis;  
    int  n,i,k,flag,len;  
    char c;  
    int kase = 0;
    
    while(scanf("%s",s)!=EOF)
	{
		printf("Case #%d: ",++kase);
		
		len=strlen(s);  
		
		int n= 10001;
      
        mod=0;  
        
        for(i=0; i<len; i++)  
        {  
            mod=mod*10+s[i]-'0';            
            mod=mod%n;                     
        }  
        
        if(mod==0)
        {
        	printf("YES\n");
        }
        else
        {
        	printf("NO\n");
        }  
		
	}	
    return 0;  
}  
