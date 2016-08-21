#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[2000];
int b[400][6];
int c[2000];
int Change(int n)
{
    int i,flag=1,m,x=0;
    int num[2000];
    m=n;
    while(m)
    { 
       m/=10;
       if(m!=0)
       flag++;
    }
    x=0;
    for(i=0;i<flag;i++)
    {
       x+=n%10;
       n/=10;
    }
    if(x%10!=x)
    return Change(x);
    else
    return x;
    
}
int main()
{
    int i,j,n,m,k,v,sum;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
       scanf("%s",a);
       m=strlen(a);k=0;j=0;
       memset(b,0,sizeof(b));
       for(i=0;i<m;i++)
       {
          if(i%6!=0||i==0)
          b[k][j++]=(int)a[i];
          else
          {
             k++;j=0;
             b[k][j++]=(int)a[i];
          }
       }
       /*for(i=0;i<=k;i++)
       {
           for(j=0;j<6;j++)
           printf("%d ",b[i][j]);
           puts("");
       }*/
       v=0;sum=0;
       for(i=0;i<6;i++)
       {
          sum=0;
          for(j=0;j<=k;j++)
          sum+=b[j][i];
          c[v++]=Change(sum);
          //printf("sum=%d\n",sum);
       }
       for(i=0;i<v;i++)
       printf("%d",c[i]);
       puts("");
    }
    system("pause");
    return 0;
}
