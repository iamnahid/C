#include <stdio.h>
int main(){

float b,d,r,G;
printf ("enter ur salary: ");
scanf ("%f", &b);
d=(40.0/100.0)*b;
r=(20.0/100.0)*b;
G=b+d+r;
printf ("GROSS SALARY %f",G);
return 0;
}
