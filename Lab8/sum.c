#include<stdio.h>

int sum(int n){
    if(n<10){
        return n;
    } else {
        return n%10+sum(n/10);
    }
}

//test
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        printf("%d\n",sum(n));
    }
    return 0;
}