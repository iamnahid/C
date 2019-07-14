#include <stdio.h>
int main (){
int n=1,sum=0,count=0;
for (n;n<=100;n=n+1)
{
sum=sum+n;
count=count+1;
printf ("show: %d",n);
}

printf ("the summation is: %d\n",sum);
printf ("the number of calculation  is: %d\n",count);
return 0;
}
