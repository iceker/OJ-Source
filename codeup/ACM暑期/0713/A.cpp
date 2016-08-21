#include <stdio.h>
#include <string.h>

int NP;


struct People
{
    char name[15];
    int frend[15];
    int orgin;
    int receive;
    int freadnum;
    int give;
};

People arr[10];
char tempname[15];

int main()
{
   // freopen("input.txt","r",stdin);

    scanf("%d",&NP);

    //char name[15];
    for(int i=0;i<NP;i++)
    {
        scanf("%s",arr[i].name);
        //printf("%s\n",arr[i].name);
    }

    int j,k;
    int l,m;
    for(int i=0;i<NP;i++)
    {
        int index=0;
        memset(tempname,0,sizeof(tempname));
        scanf("%s",tempname);
        for(j=0;j<NP;j++)
            if(!strcmp(arr[j].name,tempname)) break;
        scanf("%d%d",&arr[j].orgin,&arr[j].freadnum);



        memset(tempname,0,sizeof(tempname));

        if(arr[j].freadnum!=0)
        {
            for(k=0;k<arr[j].freadnum;k++)
            {
                scanf("%s",tempname);
                //printf("%s",tempname);
                for(l=0;l<NP;l++)
                    if(!strcmp(arr[l].name,tempname)) break;

                //printf("%s",arr[l].name);
                arr[l].receive+=arr[j].orgin/arr[j].freadnum;
            }

            arr[j].give=arr[j].orgin-arr[j].orgin%arr[j].freadnum;
        }

    }


    for(int i=0;i<NP;i++)
    {
        printf("%s %d\n",arr[i].name,arr[i].receive-arr[i].give);
    }



    return 0;
}
