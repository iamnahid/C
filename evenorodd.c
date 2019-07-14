#include <stdio.h>
int main (){
int a,n,even,odd;
printf ("ENTER A VALUE: \n");
scanf ("%d",&a);
n=a%2;
if(n==0)
printf ("even");
else
printf ("odd");
return 0;
}
