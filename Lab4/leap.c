#include<stdio.h>
int is_leap_year(int y){
    if((y%4==0&&y%100!=0)||y%400==0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int year,month;
    scanf("%d %d",&year,&month);
    switch(month){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            printf("31");
            break;
        case 2:
            if (is_leap_year(year)){
                printf("29");
            } else {
                printf("28");
            }
            break;
        default:
            printf("30");
    }
    return 0;
    
}