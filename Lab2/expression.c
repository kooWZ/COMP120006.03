#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    //(1)
    double pi = 3.14, r = 1;
    double V = pi * r * r * r * 4 / 3;
    //(2)
    double R1 = 2, R2 = 4;
    double R = 1 / (1 / R1 + 1 / R2);
    //(3)
    double x = 2;
    double y = pow(x, 5) + pow(x, 3) + 6;
    //(4) 下面应该是R^2吧（？
    double G = 2, M1 = 3, M2 = 4;
    double F = G * M1 * M2 / R2;
    //(5)
    double ans = sin(x) / x + abs(cos(pi * x / 2));
    //(6)
    int a = 2;
    bool six = a > 0 && a < 10;
    //(7)
    x = 1;y = 2;
    bool seven = (x == 1 && y != 2) || (x != 1 && y != 2);

    return 0;
}