#include<stdio.h>

int pangkat(int n, int m);

int main(){
    int n=5, m=4;
    m=pangkat(n,m);
    printf("%d", m);
 //   scanf("%d", n);
 //   return 0;
}

int pangkat(int n,int m){
    if(n>0){
        m=m*(pangkat(n-1,m));
    }
    else if(n==0){
        m=1;
    }
    return m;
}
