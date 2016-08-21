#include <stdio.h>
#include <math.h>

int main()
{
	int w,m,n;
	int nlie;
	int nhang;
	
	int mhang;
	int mlie;
	
	int juli;
	scanf("%d%d%d",&w,&m,&n);
	
	 nhang=(n-1)/w;
//	 printf("nhang:%d\n",nhang);
	
	if(nhang%2==0)
	{
		nlie=n-w*nhang-1;
	}
	
	else
	{
		nlie=w*(nhang+1)-n;
	}
	
	//printf("nlie:%d\n",nlie);
	
	 mhang=(m-1)/w;
	//printf("mhang:%d\n",mhang);
	if(mhang%2==0)
	{
		mlie=m-w*mhang-1;
	}
	else
	{
		mlie=w*(mhang+1)-m;
	}
//	printf("mlie:%d\n",mlie);
	if(n<m)
	{
		juli = (mhang-nhang)+(mlie-nlie);
	}
	else
		juli = (nhang-mhang)+(nlie-mlie);
	
	juli= fabs(juli);
	printf("%d",juli);
	
	return 0;
}
