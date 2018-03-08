#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d %d %d",&n,&a,&b);
    if((a+b)<=n)
    {
        printf("Farei hoje!\n");
    }
    else
    printf("Deixa para amanha!\n");
    return 0;
}
