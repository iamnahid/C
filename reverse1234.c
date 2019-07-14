#include <stdio.h>
int main () {
int a,res=0,x;
printf ("enter an integer value: ");
scanf ("%d",&a);
while(a!=0)
{
    x=a%10;
    res=res*10+x;
    a/=10;

}


printf ("the revErse is: %d",res);
return 0;

}
