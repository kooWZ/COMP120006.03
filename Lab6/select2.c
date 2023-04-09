#include<stdio.h>
//选择排序v2

void swap(int* a, int m, int n){
    int tmp = a[m];
    a[m] = a[n];
    a[n] = tmp;
}

int find_max(int* a, int m, int n){
    int max = m;
    for(int i=m;i<=n;i++){
        max = a[i]>a[max]?i:max;
    }
    return max;
}

int main(){
    int a[10] = {0};
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(int i=9;i>=0;i--){
        swap(a,i,find_max(a,0,i));
    }
}