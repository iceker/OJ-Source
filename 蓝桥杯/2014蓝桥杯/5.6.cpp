#include <iostream>  
#include <cmath>  
#include <cstdio>  
using namespace std;  
  
#define eps 10e-10  
  
int main(){  
    int ans = 0;  
    for(int i = 1; i < 10; ++i){  
        for(int j = 1; j < 10; ++j){  
            for(int r = 1; r < 10; ++r){  
                for(int k = 1; k < 10; k ++){  
                    if(i == j || r == k)continue;  
                    if(fabs( (i*10 + r)*1.0/(j*10+k) - (i*r*1.0)/(j*k)) < eps){  
                        printf("%d/%d : %d/%d\n", (i*10 + r),(j*10+k), i*r,(j*k));  
                        ans++;  
                    }  
                }  
            }  
        }  
    }  
    cout<<ans<<endl;  
    return 0;  
}  
/*#include <stdio.h> 

int main()
{
	for(int i=1;i<10;i++)
	{
		
		for(int j=1;j<10;j++)
		{
			for(int l=1;l<10;l++)
				for(int m=1;m<10;m++)
				{
					if(i!=j&&l!=m&&(i/j)*(l/m)==(i*10+l)/(j*10)+m) 
					{
						printf("%d %d %d %d\n",i , j ,l ,m );
					}
				}
		} 
	}
	return 0;
}
*/
