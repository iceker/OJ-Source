#include <stdio.h>
#include <string.h>

char a[100];

int main()
{
	int N;
	scanf("%d",&N);
	
	
	for(int i=0;i<N;i++)
	{
		memset(a,0,sizeof(a));
		scanf("%s",a);
		for(int j=0;j<strlen(a);j++)
		{
			if(a[j]=='Z')
			{
				a[j]='A';
			}
			else
			{
				a[j] = a[j]+1;
			}
		}
		
		printf("String #%d\n",i+1);
		printf("%s\n\n",a);
	}
	
	return 0;
}
