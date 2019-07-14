
#include <stdio.h>
 int main ()
 {
     int i,sum=0,marks[30];
     float avg;

        for (i=0;i<=29;i++)
        {
            printf ("enter marks\n");
            scanf ("%d",&marks[i]);

        }
        for (i=0;i<=29;i++)
        {
         sum=sum+i;
        }

                avg=sum/30;
        printf ("the sum is: %d\n",sum);
     printf ("the average is: %f\n",avg);




     return 0;
 }
