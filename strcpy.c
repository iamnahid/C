#include<stdio.h>

int main(){
    char st[]="abc";
    char st2[]="hello world";
    //gets(st);
    printf("before copy\n");
    printf("%s\n",st);
    printf("%s\n",st2);

    strcpy(st,st2);

    printf("After copy\n");
    printf("%s\n",st);
    printf("%s\n",st2);

    return 0;
}
