#include<stdio.h>

int fac(int n){
    if(n==1){
        return 1;
    } else {
        return n*fac(n-1);
    }
}

//test
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        printf("%d\n",fac(n));
    }
    return 0;
}