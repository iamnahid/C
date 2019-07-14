#include<stdio.h>

void show(int a,int b){
    int x=a+b;
    int y=a*b;
    printf("Hello PL1\n");
    printf("Addition : %d\n",x);
    printf("Multiplication : %d\n\n",y);
}


int main(){
    int x,y;
    int i;
    for(i=0;i<3;i++){
        scanf("%d\n",&x);
        scanf("%d\n",&y);
        show(x,y);
    }
    return 0;
}
