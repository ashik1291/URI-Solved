#include<stdio.h>
#include<string.h>
int main()
{
    char A[1000],B[1000];
    int i=0,j,n,c1,c2,c=0,p,q;
    scanf("%d",&n);
    while(i<n){
        scanf("%s %s",&A,&B);
        c1 = strlen(A);
        c2 = strlen(B);
        p=c1;
        q=c2;
        for(j=0;j<1;j++){
            while(B[c2-1]==A[c1-1])
            {
                c2--;
                c1--;
                c++;
                if(c2<=0 || c1<=0) break;
            }
            j++;

        }
        if(c==q) printf("encaixa\n");
            else printf("nao encaixa\n");

        memset(A,0,p);
        memset(B,0,q);
        c=0;
        i++;
    }
    return 0;
}
