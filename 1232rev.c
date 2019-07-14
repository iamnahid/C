#include <stdio.h>
int main (){
int a,rev=0,b;
printf ("input ur integer value: ");
scanf ("%d",&a);
while(a!=0)
{ b=a%10;
rev=rev*1+b;
a/=10;
}

printf ("the result is: %d",rev);

return 0;
}
