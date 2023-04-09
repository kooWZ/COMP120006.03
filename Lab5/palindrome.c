#include<stdio.h>

int main(){
    int n,a[11]={0},i=1;
    scanf("%d",&n);

    for(;n!=0;i++){
        a[i]=n%10;
        n/=10;
    }
    i--;
    for(int j=1;j<=i/2;j++){
        if(a[j]!=a[i-j+1]){
            printf("不是回文数");
            return 0;
        }
    }
    printf("是回文数");
    return 0;
}