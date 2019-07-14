#include<stdio.h>

int main(){
    char st[]="abc";
    char st2[]="xyz";
    //printf("%d",strcmp(st,st2));
    if(strcmp(st,st2)==0)
        printf("strings are equal");
    else
        printf("strings are not equal");

    return 0;
}
