
#include <stdio.h>
int main ()
{
    int a,b,sum;
    printf ("enter any 2 numbers\n");
        scanf ("%d %d",&a,&b);
    sum=calsum(a,b);
    printf ("the sum is %d",sum);

}
int calsum(int x,int y)
{
    int d;
    d=x+y;
return (d);
}
