#include<stdio.h>
int main()
{
    int n,max,i,m;
    while(scanf("%d",&n)!=EOF)
    {
        max=0;
        for(i=0;i<n;i++)
        {
        scanf("%d",&m);
        if(m>max) max=m;
        }
        
        if(max<10) printf("1\n");
        if(max>=10 && max<20) printf("2\n");
        if(max>=20) printf("3\n");
    }
    return 0;
}
