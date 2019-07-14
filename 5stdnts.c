#include <stdio.h>
int main ()
{
    int n1,n2,n3,n4,n5,sum;
    float per;
        printf ("enter 5 marks: ");
        scanf ("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    sum=n1+n2+n3+n4+n5;
    per=(sum*100)/500;
        printf ("SUMMATION: %d\nPERCENTAGE: %f",sum,per);


return 0;
}
