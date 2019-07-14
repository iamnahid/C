#include <stdio.h>
int main () {
int a,b,c,max;
printf ("enter ur num1: \n");
scanf ("%d",&a);
printf ("enter ur num2: \n");
scanf ("%d",&b);
printf ("enter ur num3: \n");
scanf ("%d",&c);

if(a>b&a>c)max=a;

if(b>c&b>a)max=b;

if(c>b&c>a)max=c;


printf ("the big num is: %d\n",max);


return 0;
}
