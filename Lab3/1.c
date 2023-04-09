#include<stdio.h>

int a[32]; //int最大的数转化为二进制后是31位

int main(){
    int num,n;
    scanf("%d %d",&num,&n);

    if(num==0){
        printf("0");
    } else {
        if(num<0){
            printf("-");
            num=-num;
        } 
        int id=0;
        for(int i;num>0;id++){
            i=num%n;
            num-=i;num/=n;
            a[id]=i;
        }
        id--;
        for(;id>=0;id--){
            if(a[id]>=10){
                printf("%c",a[id]+55);
            } else {
                printf("%d",a[id]);
            }
        }
    }
    return 0;
}