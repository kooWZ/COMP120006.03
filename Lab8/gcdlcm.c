int gcd(int A,int B){
    int tmp;
    while(A%B!=0){
        tmp=B;
        B=A%B;
        A=tmp;
    }
    return B;
}

int lcm(int A,int B){
    return A*B/gcd(A,B);
}
