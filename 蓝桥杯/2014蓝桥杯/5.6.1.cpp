#include <stdio.h> 
#include <math.h>

#define eps 10e-10

int main()
{
	int ans=0;
	for(int i=1;i<10;i++)
		for(int j=1;j<10;j++)
			for(int l=1;l<10;l++)
				for(int m=1;m<10;m++)
				{
					if(i==j||l==m)
						continue;
					
					if(fabs( i/j+l/m - (i*10+l)*1.0/(j*10+m)) < eps)
					{
						ans++;
					}
					
				}
	printf("%d",ans);
}




