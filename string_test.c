#include<stdio.h>
#define s 40
int main(){
    //char sts[s]={'h','e','l','l','o'};
    char sts[s];
    //char ch;
    //scanf("%s",sts);
    gets(sts);
    int i;
    for(i=0;i<strlen(sts);i++){ //use with s also
        printf("%c",sts[i]);
    }
    //printf("%s",sts);
    //printf("%s",sts);
    return 0;
}
