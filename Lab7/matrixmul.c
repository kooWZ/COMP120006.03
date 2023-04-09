#include<stdio.h>
#include<conio.h>

int main(){
    int m1[50][50]={0},m1x,m1y;
    int m2[50][50]={0},m2x,m2y;
    int m3[50][50]={0};

    printf("请输入矩阵1的行数和列数，以空格分隔： ");
    scanf("%d %d",&m1x,&m1y);
    printf("请输入矩阵2的行数和列数，以空格分隔： ");
    scanf("%d %d",&m2x,&m2y);

    if(m1y==m2x){
        printf("请输入矩阵1，每行数字间以空格隔开\n");
        for(int i=1;i<=m1x;i++){
            for(int j=1;j<=m1y;j++)
                scanf("%d",&m1[i][j]);
        }
        printf("请输入矩阵2，每行数字间以空格隔开\n");
        for(int i=1;i<=m2x;i++){
            for(int j=1;j<=m2y;j++)
                scanf("%d",&m2[i][j]);
        }
    
    for(int x=1;x<=m1x;x++){
        for(int y=1;y<=m2y;y++){
            for(int i=1;i<=m1y;i++){
                m3[x][y]+=m1[x][i]*m2[i][y];
            }
        }
    }

    printf("相乘得到的矩阵是：\n");
    for(int x=1;x<=m1x;x++){
        for(int y=1;y<=m2y;y++){
            printf("%3d ",m3[x][y]);
        }
        printf("\n");
    }
    } else {
        printf("%d",-1);
    }

}