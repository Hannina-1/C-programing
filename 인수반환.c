#include <stdio.h>

int slen(char *s){
    int n=0;
    while(*s !='\0'){
        s++; n++;
    }
    return n;
}
int main(){
    char st[100];
    printf("문자열 입력:");
    gets(st);
    printf("number of char.=%d\n",slen(st));
}