#include <stdio.h>
#include <string.h>

char arr[10005];

int main()
{
    int i=0;
    while(1)
    {
        arr[i]=getchar();

        if(arr[i]=='#')
        {
            break;
        }
        if(arr[i]=='\n')
        {
            int sum=0;
            for(int j=0;j<i;j++)
            {

                if(arr[j]>='A'&&arr[j]<='Z')
                {
                    sum+=(j+1)*(arr[j]-'A'+1);
                }
                if(arr[j]==' ')
                    sum+=0;
            }

            printf("%d\n",sum);

            i=0;
            memset(arr,0,sizeof(arr));
        }
        else
        {
            i++;
        }
    }
}

