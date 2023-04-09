#include<stdio.h>
#include<string.h>

int main(){
    char s[100] = {0};
    scanf("%s",s);

    int n[26] = {0};

    for(int i=0;i<=strlen(s)-1;i++){
        char c = s[i];
        if (c>=65&&c<=90){
            n[c-65]++;
        } else if (c>=97&&c<=122){
            n[c-97]++;
        }
    }

    for(int i=0;i<=25;i++){
        printf("%c:%d\n",i+65,n[i]);
    }
    
    return 0;
}