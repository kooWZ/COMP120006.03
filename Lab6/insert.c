#include<stdio.h>
//插入排序

void swap(int* a,int i,int j){
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

int main(){
    int a[10];
    int l = sizeof(a)/sizeof(int);
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }

    for(int i=1;i<=l-1;i++){
        for(int j=i-1,ii=i;j>=0&&a[j]>a[ii];j--){
            swap(a,j,ii);
            ii=j;
        }
    }

    for(int i=0;i<=l-1;i++)printf("%d ",a[i]);
}
