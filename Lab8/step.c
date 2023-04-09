#include<stdio.h>

int step(int n){
    if(n==1||n==0){
        return 1;
    } else {
        return step(n-1)+step(n-2);
    }
}

//test
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        printf("%d\n",step(n));
    }
    return 0;
}