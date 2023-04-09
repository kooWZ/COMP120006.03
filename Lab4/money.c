#include<stdio.h>
int main(){
    int month,num;
    double cost;
    scanf("%d %d",&month,&num);
    if (month >=7 && month <= 9){
        if (num < 20){
            cost = 0.85 * num * 398;
        } else {
            cost = 0.7 * num * 398;
        }
    } else {
        if (num < 20){
            cost = 0.7 * num * 398;
        } else {
            cost = 0.5 * num * 398;
        }
    }
    printf("%.2lf",cost);
    return 0;
}