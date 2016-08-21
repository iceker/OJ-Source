#include <stdio.h>

int main()
{
	int a[8]={0};
	for(int i=1;i<10;i++)
		for(int j=0;j<10;j++)
			for(int k=0;k<10;k++)
				for(int l=0;l<10;l++)
	for(int m=1;m<10;m++)
		for(int n=0;n<10;n++)
			for(int o=0;o<10;o++)
				for(int q=0;q<10;q++)
				{
					if(i*1000+j*100+k*10+l + m*1000+n*100+o*10+j==m*10000+n*1000+k*100+j*10+q
						&&i!=j&&i!=k&&i!=l&&i!=m&&i!=n&&i!=o&&i!=q
						&&j!=k&&j!=l&&j!=m&&j!=n&&j!=o&&j!=q
						&&k!=l&&k!=m&&k!=n&&k!=o&&k!=q
						&&l!=m&&l!=n&&l!=o&&l!=q
						&&m!=n&&m!=o&&m!=q
						&&n!=o&&n!=q
						&&o!=q
					)
					{
						printf("%d%d%d%d%d%d%d%d %d\n ",i,j,k,l,m,n,o,q,m*10000+n*1000+k*100+j*10+q);
					}
				}
	
	return 0;
}
