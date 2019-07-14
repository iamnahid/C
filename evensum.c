#include <stdio.h>
int main (){
int i,c1=0,s1=0;
for (i=2;i<=100;i=i+2)
{ c1++;
if (c1<=50)

{printf ("the even number is: %d\n",i);

s1=s1+i;}
}
printf ("the summation of the even number is: %d\n",s1);

return 0;
}
