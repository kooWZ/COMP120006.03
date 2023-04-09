#include<stdio.h>

//getGrade的123是试图用3种不同的办法写

int *getGrade(int totalGrade[][5],int n,int id){
    for(int i=0;i<n;i++){
        if(**(totalGrade+i)==id){
            return *(totalGrade+i);
        }
    }
    return NULL;
}

int *getGrade2(int (*totalGrade)[5],int n,int id){
    for(int i=0;i<n;i++){
        if(**(totalGrade+i)==id){
            return *(totalGrade+i);
        }
    }
    return NULL;
}

int *getGrade3(int *totalGrade,int n,int id){
    for(int i=0;i<n;i++){
        if(*(totalGrade+5*i)==id){
            return (totalGrade+5*i);
        }
    }
    return NULL;
}

void printGrade(int totalGrade[][5],int n,int id){
    for(int i=0;i<n;i++){
        if(**(totalGrade+i)==id){
            printf("id: %d \nGrades: ",id);
            for(int j=1;j<5;j++){
                printf("%d ",*(*(totalGrade+i)+j));
            }
        }
    }
}

int main(){
    int id;
    int totalGrades[3][5]={{0,1,2,3,4},
                            {1,2,3,4,5},
                            {2,3,4,5,6}};

    printGrade(totalGrades,3,2);

    printf("\ninput the id: ");
    scanf("%d",&id);

    //test 1，2，3
    int g1,g2,g3,g4;
    g1 = *getGrade(totalGrades,3,id);
    g2 = *(getGrade2(totalGrades,3,id)+1);
    g3 = *(getGrade3(&totalGrades[0][0],3,id)+2);
    g4 = *(getGrade(totalGrades,3,id)+3);
    printf("Grades: %d %d %d %d",g1,g2,g3,g4);

    return 0;
}