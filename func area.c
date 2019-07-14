#include <stdio.h>
int main ()
{

    int radius;
    float area,perimeter;
    printf ("enter circles radious: ");
    scanf ("%d",&radius);
    nrk(radius,&area,&perimeter);
    printf ("the area is %f\n",area);
    printf ("perimeter: %f\n",perimeter);
     return 0;
}

void nrk(int r,float *a,float *p)
{
    *a=3.25*r*r;
    *p=2*3.14*r;

}
