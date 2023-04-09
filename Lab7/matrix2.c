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
    int x=1,y=1,direction=0;  //mod4 余0右，余1下，余2左，余3上
    for(int i=1;i<=N*N;i++){
        a[x][y]=i;
        switch (direction%4) {
            case 0:
                if(a[x][y+1]!=0){
                    direction++;
                    x++;
                } else {
                    y++;
                }
                break;
            case 1:
                if(a[x+1][y]!=0){
                    direction++;
                    y--;
                } else {
                    x++;
                }
                break;
            case 2:
                if(a[x][y-1]!=0){
                    direction++;
                    x--;
                } else {
                    y--;
                }
                break;
            case 3:
                if(a[x-1][y]!=0){
                    direction++;
                    y++;
                } else {
                    x--;
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
