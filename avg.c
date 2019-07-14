#include <stdio.h>
int main (){
int n1,n2,n3,n4,n5,sum;
float avg;
printf ("input 5 SCORES: ");
scanf ("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
sum=(n1+n2+n3+n4+n5);
avg=sum/5;
printf ("the AVERAGE IS: %f",avg);
return 0;
}
