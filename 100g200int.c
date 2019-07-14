#include <stdio.h>
int main(){
int g=101,c=0;
for (g;g<200;g=g+1)
 if(g%7==0){
  printf ("the numbers are: %d\n",g);
  c=g+c;

   }

printf ("count: %d",c);

   return 0;
}
