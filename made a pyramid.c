#include<stdio.h>
int main(){
int a,x,y;
printf("enter the number of column you want to print:\n");
scanf("%d",&a);

for(x=1;x<=a;x++){

for(y=a-x;y>=1;y--){
     printf("  ");
}
for(y=1;y<=x;y++){
        printf("*");
}

printf("\n");}


return 0;

}
