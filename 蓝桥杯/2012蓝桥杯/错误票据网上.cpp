#include <stdio.h>  
#include <iostream>  
#include <string.h>  
#include <algorithm>  
using namespace std;  
  
int n,a[10000],i,len,j;  
char s[100];  
  
int main()  
{  
    cin >> n;  
    gets(s);  
    len = 0;  
    int k = -1;  
    for(i = 0; i<n; i++)  
    {  
        gets(s+1);  
        s[0] = ' ';  
        int flag = 0;  
        for(j = 0; s[j]; j++)  
        {  
            if(s[j-1] == ' ' && s[j]!=' ')  
            {  
                k = s[j]-'0';  
                flag = 1;  
            }  
            else if(s[j] == ' ')  
            {  
                if(k!=-1)  
                    a[len++] = k;  
                flag = 0;  
                k = -1;  
            }  
            else if(flag)  
                k = k*10+s[j]-'0';  
        }  
    }  
    if(k!=-1)  
    a[len++] = k;  
    sort(a,a+len);  
    int x = 0,y = 0;  
    for(i = 1;i<=len;i++)  
    {  
        if(a[i] == a[i-1])  
        y = a[i];  
        else if(a[i]-a[i-1] == 2)  
        x = a[i-1]+1;  
    }  
    cout << x << " " << y << endl;  
  
    return 0;  
}  

