#include <stdio.h>
int main () {

int a,s,d,sum;
float avg;

printf ("enter 3 values: ");
scanf ("%d %d %d",&a,&s,&d);
sum=(a+100)+(s+100)+(d+100);
sum=a+s+d;
avg= sum/3;

printf ("summation: %d\naverage: %f\n",sum,avg);


return 0;
}
