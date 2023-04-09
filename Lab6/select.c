#include<stdio.h>
//选择排序

void swap(int* a,int i,int j){
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

int main(){
    int a[11]={2,7,4,5,9,100,3,7,34,7,1};
    int l=sizeof(a)/sizeof(int);

    for(int i=0;i<=l-2;i++){
        int k=i+1;
        for(int j=i+1;j<=l-1;j++){
            if(a[j]<a[k]){
                k=j;
            }
            swap(a,k,i);
        }
    }
    for(int i=0;i<=l-1;i++)printf("%d ",a[i]);
}