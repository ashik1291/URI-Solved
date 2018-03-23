#include<stdio.h>
int main(){
    long int M,N;
    long int sum,ts1=1,ts2=1;
    while(scanf("%ld %ld",&M,&N)!=EOF){
        while(M>=0){
           if(M!=0){
           ts1=ts1*M;
           M--;
           }
           else if(M==0){
                break;
           }
        }
        while(N>=0){
           if(N!=0){
           ts2=ts2*N;
           N--;
           }
           else if(N==0){
                break;
           }
        }
        sum = ts1+ts2;
        printf("%ld\n",sum);
        sum=0;
        ts1=1;
        ts2=1;
    }
    return 0;
}
