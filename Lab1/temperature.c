#include<stdio.h>
//保留两位小数输出
int main(){
    printf("F C\n");
    for(int F=0;F<=200;F+=20){
        printf("%d %.2f\n",F,(5.0/9)*(F-32));
    }
    return 0;
}