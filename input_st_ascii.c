#include<stdio.h>
#define s 40
int main(){
    char sts[s]="abcz";
    /*char vl='-';
    printf("%c\n",vl=vl+32);
    printf("%c\n",vl);*/
    int i;
    //gets(sts);
    for(i=0;i<strlen(sts);i++){ //use with s also
        printf("%c\n",(sts[i]-32));
    }
    printf("%s",sts);

    return 0;
}
