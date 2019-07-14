#include <stdio.h>
int main (){
int a,b,max;
printf ("input num1: \n");
scanf ("%d", &a);
printf ("input num2: \n");
scanf ("%d", &b);

if(a>b)
    max=a;
else
max=b;

printf ("the big num is: %d\n",max);

return 0;
}
