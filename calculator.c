#include <stdio.h>
int main (){
int n,r,k;
char x;
scanf ("%d",&n);
scanf ("%c",&x);
scanf ("%d",&r);


switch(x)
{
    case '+':
    k=n+r;
    break;
    case '-':
    k=n-r;
    break;
    case '/':
    k=n/r;
    break;
    case '%':
    k=n%r;
    break;
}
printf ("the result is: %d",k);
return 0;
}
