#include"Q2.h"
#include<string.h>

void inputStudentInfo(struct Student stulist[],int *n){
    printf("请依次输入学号： 姓名 性别 年龄 年级 班级\n");
    struct Student* stu = stulist+*n;
    scanf("%d %s %s %d %d %d",&stu->id,stu->name,stu->gender,&stu->age,&stu->grade,&stu->classid);
    (*n)++;
}

void showStudentInfoById(struct Student stulist[],int n,int id){
    for(int i=0;i<n;i++){
        struct Student* stu = stulist+i;
        if(stu->id==id){
            printf("学号:%d\n姓名:%s\n性别:%s\n年龄:%d\n年级:%d\n班级:%d\n",
            stu->id,stu->name,stu->gender,stu->age,stu->grade,stu->classid);
            return;
        }
    }
    printf("该id不存在\n");
}

void showStudentInfoByName(struct Student stulist[],int n,char name[]){
    for(int i=0;i<n;i++){
        if(strcmp((stulist+i)->name,name)==0){
            struct Student* stu = stulist+i;
            printf("学号:%d\n姓名:%s\n性别:%s\n年龄:%d\n年级:%d\n班级:%d\n",
            stu->id,stu->name,stu->gender,stu->age,stu->grade,stu->classid);
            printf("总分：%d\n课程id 得分\n",stu->scores.total);
            for(int i=0;i<10;i++){
                printf("%d %d\n",i,stu->scores.scores[i]);
            }
            return;
        }
    }
    printf("该姓名的学生不存在\n");
}

void showAllStudentsInfo(struct Student stulist[],int n){
    for(int i=0;i<n;i++){
        showStudentInfoById(stulist,n,i);
        printf("\n");
    }
}

void getAverageTotalScore(struct Student stulist[],int n){
    int total=0;
    for(int i=0;i<n;i++)
        total += (stulist+i)->scores.total;
    double avg = 1.0*total/n;
    printf("总平均分为： %g\n",avg);
}

void getAverageCourseScore(struct Student stulist[],int n,int courseid){
    if(courseid>=0&&courseid<10){
        int total=0;
        for(int i=0;i<n;i++)
            total += (stulist+i)->scores.scores[courseid];
        double avg = 1.0*total/n;
        printf("课程%d平均分为： %g\n",courseid,avg);
    } else {
        printf("该课程不存在\n");
    }
}

int main(){
    struct Student stulist[20]; 
    int stuNum=0;
    int c=1;
    while(1){
        printf("当前有%d个学生信息\n",stuNum);
        printf("\n");
        printf("输入1录入学生信息\n"
            "输入2录入学生成绩\n"
            "输入3浏览全部信息\n"
            "输入4按姓名查找\n"
            "输入5按学号查找\n"
            "输入6按总分排名\n"
            "输入7按某门课排名\n"
            "输入8求总平均分\n"
            "输入9求某门课总平均分\n"
            "输入0退出\n");
        scanf("%d",&c);
        printf("\n");
        switch (c){
            case 1:
                inputStudentInfo(stulist,&stuNum);
                break;
            case 2:
                inputCourseScore(stulist,stuNum);
                break;
            case 3:
                showAllStudentsInfo(stulist,stuNum);
                break;
            case 4:
                char name[20];
                printf("请输入姓名：");
                scanf("%s",name);
                showStudentInfoByName(stulist,stuNum,name);
                break;
            case 5:
                int id;
                printf("请输入学号：");
                scanf("%d",&id);
                showStudentInfoById(stulist,stuNum,id);
                break;
            case 6:
                sortByTotalScore(stulist,stuNum);
                break;
            case 7:
                int courseid;
                printf("请输入课程编号：");
                scanf("%d",&courseid);
                sortByScore(stulist,stuNum,courseid);
                break;
            case 8:
                getAverageTotalScore(stulist,stuNum);
                break;
            case 9:
                printf("请输入课程编号：");
                scanf("%d",&courseid);
                getAverageCourseScore(stulist,stuNum,courseid);
                break;
            case 0:
                return 0;
            default:
                break;
        }
        printf("\n");
    }
}