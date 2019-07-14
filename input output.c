#include <stdio.h>
int main(){
int a,res;

printf ("input the NUMBER: ");
scanf ("%d",&a);
if(a>0){res=a;}
if(a<0)
{res=(a)*(-1);}
printf ("the number is: %d",res);

return 0;
}
