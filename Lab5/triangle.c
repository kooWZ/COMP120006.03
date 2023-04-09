#include<stdio.h>

int main(){
    double n,temp=1;
    double e=1;
    scanf("%lf",&n);
    n++;
    for(int i=2;i<=n;i++){
        temp*=(i-1);
        e+=(1.0/temp);
    }
    printf("e=%16.10lf",e);
    return 0;
}