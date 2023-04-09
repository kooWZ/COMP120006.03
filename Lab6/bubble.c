#include<stdio.h>
//冒泡排序

void swap(int* a,int i,int j){
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

int main(){
    int a[11]={2,7,4,5,9,100,3,7,34,7,1};
    int l=sizeof(a)/sizeof(int);

    for(int i=1;i<=l-1;i++){
        for(int j=0;j+1<=l-i;j++){
            if(a[j]>a[j+1]){
                swap(a,j,j+1);
            }
        }
    }
    for(int i=0;i<=l-1;i++)printf("%d ",a[i]);
}