#include <stdio.h>

int main(){
    int ar[]={3,2,1,6,7};
    int *p=&ar[0];
    int i;
    for(i=0;i<5;i++){
        printf("%d\n",*(p+i));
        //printf("%d\n",p[i]);
    }

    return 0;
}
