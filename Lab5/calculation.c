#include<stdio.h>
#include<math.h>

int equal(double a,double b){
    return fabs(a-b)<0.000001;
}

int main(){
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);

    //向量
    double vec1x = x3-x1;
    double vec1y = y3-y1;
    double vec2x = x2-x1;
    double vec2y = y2-y1;
    double vec3x = x3-x2;
    double vec3y = y3-y2;

    //向量平行则不能构成，先考虑分母为零
    if(equal(vec1x,0)||equal(vec2x,0)){
        if (equal(vec1x,0)&&equal(vec2x,0)){
            printf("不能构成三角形");
            return 0;
        }
    } else if(equal((vec1y/vec1x),(vec2y/vec2x))){
        printf("不能构成三角形");
    } else {

        //三个边长
        double a = sqrt(vec1x*vec1x+vec1y*vec1y);
        double b = sqrt(vec2x*vec2x+vec2y*vec2y);
        double c = sqrt(vec3x*vec3x+vec3y*vec3y);

        //按大小排列
        double max = a>=b?(a>=c?a:c):(b>=c?b:c);
        double min = a<=b?(a<=c?a:c):(b<=c?b:c);
        double med = a+b+c-max-min;

        int rt =0,iso=0;

        //判断直角
        if(equal(max*max,min*min+med*med)){
            rt=1;
        }
        //判断等边等腰

        if(equal(max,med)||equal(med,min)){
            if(equal(max,min)){
                printf("是等边三角形");
                return 0;
            } else {
                iso = 1;
            }
        }

        //输出
        if(rt&&iso){
            printf("是等腰直角三角形");
        } else if (rt){
            printf("是直角三角形");
        } else if (iso){
            printf("是等腰三角形");
        } else {
            printf("是普通三角形");
        }
    }
    return 0;
}
    
