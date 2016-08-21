#include <stdio.h>

char a[355]= {0};


int main()
{
	int N;

	scanf("%d",&N);

	scanf("%s",a);

	int ans=0,ans1=0,ans2=0;

	int maxans=0;

int temp;

	for(int i=0; i<N; i++)
	{
		int k=i;

		ans1=0;
		ans2=0;

		while((k+1)%N!=i  && (a[(k+1)%N]==a[i] || a[(k+1)%N]=='w') )
		{
			k=(k+1)%N;
			ans1++;
		}

		ans1+=1;

		temp=(i+N-1)%N;
		k=temp;

		while((k+N-1)%N!=i && (a[(k+N-1)%N] == a[temp] || a[(k+N-1)%N] =='w') )
		{
			k=(k+N-1)%N;
			ans2++;
		}

		ans2+=1;

		if(ans1+ans2>=N)
		{
			ans=N;
		}

		else
		{
			ans=ans1+ans2;
		}

		if(maxans<ans)
		{
			maxans=ans;
		}


	}

	printf("%d\n",maxans);



	return 0;
}
