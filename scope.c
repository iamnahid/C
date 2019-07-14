#include<stdio.h>
int v=105;
void test(){
    int v=4;
    printf("from test %d\n",v);
}
int main(){
    int v=10;
    //test();
    printf("from main %d\n",v);
    return 0;
}
