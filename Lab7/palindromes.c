#include<stdio.h>
#include<stdbool.h>

bool isPalindromes(int n) {
    int i=1,a[5]={0};
    for(;n!=0;i++){
        a[i]=n%10;
        n/=10;
    }
    i--;
    int j=1;
    for(;j<=i/2;j++){
        if(a[j]!=a[i-j+1]){
            return false;
        }
    }
    return true;
}

int main(){
    for(int i=1;i<=1000;i++){
        if (isPalindromes(i)==true){
            printf("%d\n",i);
        }
    }
    return 0;
}