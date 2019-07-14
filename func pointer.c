#include <stdio.h>
int main ()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;

   printf ("the adress of i: %u\n",&i);
   printf ("the adress of i: %u\n",j);
   printf ("the adress of i: %u\n",*k);
   printf ("the adress of i: %u\n",&j);
   printf ("the adress of i: %u\n",k);
   printf ("the adress of i: %u\n",&k);
   printf ("the value of i: %d\n",*(&i));
   printf ("the value of i: %d\n",*j);
   printf ("the value of i: %d\n",**k);



    return 0;

}
