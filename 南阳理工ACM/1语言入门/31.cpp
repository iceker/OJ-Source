#include <stdio.h>

int main()
{
	int a[6];
	int max=0,min=10000;
	for(int i=0; i<5; i++) 
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<5; i++) 
	{
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	
	printf("%d %d\n",min,max);
	
	return 0;
}
