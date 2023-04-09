#include<stdio.h>

//N<=100
int main(){
    int N;
    scanf("%d",&N);
    int a[102][102]={0};

    //初始化边界
    for(int i=0;i<=N+1;i++){
        a[0][i]=1;
        a[N+1][i]=1;
    }
    for(int i=1;i<=N;i++){
        a[i][0]=1;
        a[i][N+1]=1;
    }

    //开始生成数组
    int x=2,y=1,direction=0; //mod2 余0右上，余1左下
    a[1][1]=1;
    for(int i=2;i<=N*N;i++){
        a[x][y]=i;
        switch (direction%2) {
            case 0:
                if(a[x-1][y+1]!=0){
                    direction++;
                    if(y==N){
                        x++;
                    } else {
                        y++;
                    }
                } else {
                    x--;
                    y++;
                }
                break;
            case 1:
                if(a[x+1][y-1]!=0){
                    direction++;
                    if(y==1){
                        x++;
                    } else {
                        y++;
                    }
                } else {
                    x++;
                    y--;
                }
                break;
        }
    }

    //输出
    for(int x=1;x<=N;x++){
        for(int y=1;y<=N;y++){
            printf("%5d ",a[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}

