#include<stdio.h>
#include<math.h>

int main(){
    short max_short = pow(2, 8.0 * sizeof(short) - 1) - 1;
    /*或：
    short max_short=0;
    while((short)(a+1)>0){
        a++;
    }
    */

    int max_int = pow(2, 8.0 * sizeof(int) - 1) - 1;

    long long max_ll = pow(2, 8.0 * sizeof(long long) - 1);
    //"overflow in conversion from 'double' to 'long long int' changes value from '9.2233720368547758e+18' to '9223372036854775807'"
    //这里overflow的warning似乎不能避免？pow返回的double值有误差，超过__LONG_LONG_MAX__

    printf("max_short is %d\nmax_int is %d\nmax_long long is %lld\n", max_short, max_int, max_ll);
    printf("验证：\nmax_short+1 is %d\nmax_int+1 is %d\nmax_long long+1 is %lld", (short)(max_short + 1), max_int + 1, max_ll + 1);

    return 0;
}
