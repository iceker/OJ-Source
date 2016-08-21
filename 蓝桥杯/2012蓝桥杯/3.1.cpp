#include<iostream>  
using namespace std;  
  
int main(void)  
{  
    int x,y;  
    cin>>x>>y;  
    for(int i=1 ; i<=60 ;i++)  
    {  
        y-=x;  
        if(i%2==0){y<<=1;};//每两分钟Y分裂一次  
        if(i%3==0){x<<=1;};//每三分钟X分裂一次  
        if(y<=0)  
        {  
            y=0;            //Y数量不够X吃的了,最少就是0  
            break ;  
        }  
    }  
    cout<<y;  
    //system("pause");  
    return 0;  
}  
