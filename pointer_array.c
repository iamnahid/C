#include <stdio.h>

int main(){
    int ar[]={3,2,1,6,7};
    int *p=&ar[0];
    printf("%d\n",*p);
    printf("%d\n",*(p+0));
    printf("%d\n",*(p+2));
    printf("%d\n",*(p=p+1));
    printf("%d\n",*(p));
    printf("%d\n",*(p++));
    printf("%d\n",*(p));

    return 0;
}
