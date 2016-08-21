#include <stdio.h> 
#include <algorithm>
using namespace std;


int n;
int arr[10]={0};

int isIn(int k)
{
	for(int j=0;j<n;j++)
	{
		if(k==arr[j])
		{
			return 1;
		}
	}
	
	return 0;
	
}
	
	
int check(int m,int k)
{
	
	if(isIn(m%10)&&isIn(m/10%10)&&isIn(m/100)&&isIn(k%10)&&isIn(k/10))
	{
		int first=m*(k%10);
		int second= m*(k/10);
		int res= m*k;
		if(first<1000&&second<1000
		&&isIn(first%10)&&isIn(first/10%10)&&isIn(first/100)
		&&isIn(second%10)&&isIn(second/10%10)&&isIn(second/100)
		&&isIn(res%10)&&isIn(res/10%10)&&isIn(res/100%10)&&isIn(res/1000)
		)
		{
			
			return 1;
			
		}
		
		return 0;
	
	}
	return 0;

	
}

int main()
{
	
   // freopen("crypt1.in","r",stdin);  
    //freopen("crypt1.out","w",stdout);  
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
//	int ans=check(222,22);
//	printf("%d",ans);
	
	int ans=0;
	
	

	for(int i=100;i<1000;i++)
	{
		
		for(int j=10;j<100;j++)
		{
			int m=i*j;
			if(m>9999) break;
			if(check(i,j))
			{
				ans++;
			}
		}
	}
	

	printf("%d\n",ans);
	
	return 0;
}
