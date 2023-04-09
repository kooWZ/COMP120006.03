#include<stdio.h>

void swap(int* a,int i,int j){
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

int b_s(int *a,int t,int m,int n){
    if (m==n){
        if (t==a[m]){
            return m;
        } else {
            return -1;
        }
    } else {
        int mid = (m+n)/2;
        if(t==a[mid]){
            return mid;
        } else if (t>a[mid]){
            b_s(a,t,mid+1,n);
        } else if (t<a[mid]){
            b_s(a,t,m,mid-1);
        }
    }
}

int main(){
    int a[10]={2,7,4,5,9,100,3,7,34,7};
    int l=sizeof(a)/sizeof(int);
    
    for(int i=0;i<=l-2;i++){
        int k=i+1,min=a[k];
        for(int j=i+1;j<=l-1;j++){
            if(a[j]<min){
                min=a[j];
                k=j;
            }
        }
        if(a[i]>min)
            swap(a,k,i);
    }
    for(int i=0;i<=l-1;i++)printf("%d ",a[i]);
    printf("\n");
    int t;
    scanf("%d",&t);
    printf("%d\n",b_s(a,t,0,l-1));
    return 0;
}