 #include <stdio.h>
 #include <string.h>
 
 int a[1005];
 
 bool is_prime(int n)
 {
 	int i;
 	
 	if(n==1) return false;
 	for(i=2;i<n;i++)
 	{
 		if(n%i==0) break;
 	}
 	
 	if(i>=n) return true;
 	else return false;
 }
 
 int main()
 {
 	int m,n;
 	int sum=0;
 	scanf("%d",&m);
 	while(m--)
 	{
 		sum=0;
 		memset(a,0,sizeof(a));
 		scanf("%d",&n);
 		for(int i=0;i<n;i++)
 		{
 			scanf("%d",&a[i]);
 		}
 		
 		for(int i=0;i<n;i++)
 		{
 			if(is_prime(a[i]))
 			{
 				sum+=a[i];
 			}
 		}
 		
 		printf("%d\n",sum);
 	}
 	return 0;
 }
