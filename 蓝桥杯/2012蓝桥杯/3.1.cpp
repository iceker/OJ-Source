#include<iostream>  
using namespace std;  
  
int main(void)  
{  
    int x,y;  
    cin>>x>>y;  
    for(int i=1 ; i<=60 ;i++)  
    {  
        y-=x;  
        if(i%2==0){y<<=1;};//ÿ������Y����һ��  
        if(i%3==0){x<<=1;};//ÿ������X����һ��  
        if(y<=0)  
        {  
            y=0;            //Y��������X�Ե���,���پ���0  
            break ;  
        }  
    }  
    cout<<y;  
    //system("pause");  
    return 0;  
}  
