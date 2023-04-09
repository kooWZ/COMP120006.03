#include<stdio.h>

void move(int n,char source,char destination){
    printf("将第%d个圆环从%c移到%c\n",n,source,destination);
}

void hanoi(int n,char a,char b,char c){
    //从a移动到c，b作辅助作用
    if(n==1){
        move(1,a,c);
    } else {
        hanoi(n-1,a,c,b);
        move(n,a,c);
        hanoi(n-1,b,a,c);
    }
}

//test
//定义：ABC三个柱子，有n个圆环在A上，现在将其移到C上
int main(){
    int n;
    while(1){
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    printf("移动完成\n");
    }
    return 0;
}