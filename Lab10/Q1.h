struct Date{
    int year;
    int month;
    int day;
};

struct stuScores{
    int scores[10] = {0};
    int total = 0;
};

struct Student{
    int id;
    char name[20];
    char gender[10];
    int age;
    struct Date birthday;
    int grade;
    int classid;
    struct stuScores scores;
};
