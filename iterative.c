#include<stdio.h>

int main(){
    int a=5, b=4, h=1;
    if (a==0){
        b=1;
    }
    else {
        for(int i=1; i<=a; i++){
            h=h*b;
        }
    }
    printf("%d", h);
}