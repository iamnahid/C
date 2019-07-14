#include <stdio.h>

int main ()
{

    printf ("m in main\n");
    bd();

    venice();
    america();


    return 0;
}

void venice()
{
    printf ("m in venice\n");
}


void bd()
{
    printf ("m in bd\n");
}

void america()
{
    printf ("m in america\n");
}
