#include<stdio.h>
#include<stdlib.h>

int main(){
    //input of old array
    int n,*old_arr;
    printf("输入旧数组的长度： ");
    scanf("%d",&n);
    printf("输入旧数组： ");
    old_arr = (int *) malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d", old_arr+i);
    }

    //generate new_arr array
    int *new_arr,count = 0,already;
    new_arr = (int *) malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        already = 0;
        for(int j=0;j<count;j++){
            if(*(new_arr+j) == *(old_arr+i)){
                already = 1;
                break;
            }
        }
        if(already==0){
            *(new_arr+count) = *(old_arr+i);
            count++;
        }
    }

    //output of new array
    printf("新数组是： ");
    for(int i=0;i<count;i++){
        printf("%d ", *(new_arr+i));
    }

    return 0;
}