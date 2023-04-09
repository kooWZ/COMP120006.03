#include<stdio.h>
int main(){
    int origin_score,prize;
    int new_score;
    scanf("%d %d",&origin_score,&prize);
    if (prize == 1){
        new_score = origin_score + 10;
    } else if (prize == 2 || prize == 3){
        new_score = origin_score + 5;
    }
    if (new_score > 100) new_score = 100;
    printf("%d",new_score);
    return 0;
}