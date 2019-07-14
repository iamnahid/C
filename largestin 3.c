#include <stdio.h>
int main(){
int a,b,c,max;
printf ("input 3 numbers: \n");
scanf ("%d %d %d",&a,&b,&c);
if(a>b&&a>c){max=a;}
if(b>a&&b>c){max=b;}
if(c>a&&c>b){max=c;}

printf ("the LARGEST num is: %d\n45 ",max);
printf ("READ WELL :)");
return 0;
}
