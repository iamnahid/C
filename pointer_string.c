#include <stdio.h>

int main(){
    char ar[]="hello";
    char *p=&ar[0];
    int i=0;
    while(*p!='\0'){
        printf("%c\n",*p);
        p++;
        //printf("%c\n",p[i]);
    }

    return 0;
}
