#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
    if(a>b&&b>c&&c>d){
        printf("%1d%1d%1d%1d 是降序数",a,b,c,d);
    } else {
        printf("%1d%1d%1d%1d 不是降序数",a,b,c,d);
    }
    return 0;
}