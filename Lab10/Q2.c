#include "Q2.h"

void swap(struct Student a[],int i,int j){
    struct Student tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

void inputCourseScore(struct Student stulist[],int n){
    int id,i,score,courseid;
    printf("请输入学生的学号：");
    scanf("%d",&id);
    for(i=0;i<n;i++){
        if(stulist[i].id==id){
            printf("请输入：课程id 分数 (课程id为0~9的整数)\n");
            scanf("%d %d",&courseid,&score);
            if(courseid>9&&courseid<0){
                printf("不存在这个课程(课程id为0~9的整数)\n");
            } else {
                stulist[i].scores.scores[courseid] = score;
                stulist[i].scores.total += score;
            }
            return;
        }
    }
    printf("该学号不存在\n");
}

void sortByTotalScore(struct Student stulist[],int n){
    for(int i=1;i<=n-1;i++){
        for(int j=i-1,ii=i;j>=0&&stulist[j].scores.total>stulist[ii].scores.total;j--){
            swap(stulist,j,ii);
            ii=j;
        }
    }
    printf("名次 学号 姓名 总分\n");
    for(int i=0;i<n;i++){
        printf("%d %d %s %d\n",i+1,stulist[n-i-1].id,stulist[n-i-1].name,stulist[n-i-1].scores.total);
    }
}

void sortByScore(struct Student stulist[],int n,int courseid){
    for(int i=1;i<=n-1;i++){
        for(int j=i-1,ii=i;j>=0&&stulist[j].scores.scores[courseid]>stulist[ii].scores.scores[courseid];j--){
            swap(stulist,j,ii);
            ii=j;
        }
    }
    printf("课程：%d\n",courseid);
    printf("名次 学号 姓名 得分\n");
    for(int i=0;i<n;i++){
        printf("%d %d %s %d\n",i+1,stulist[n-i-1].id,stulist[n-i-1].name,stulist[n-i-1].scores.scores[courseid]);
    }
}