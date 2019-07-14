#include <stdio.h>
int main ()
{
    int marks[]= {4,3,-20,6,7,10}, i, co = 0, ce = 0 ;
    for(i=0; i<=5; i++)
    {
        if(marks[i] % 2 == 0)
        ce++;

        else if(marks[i] % 2 == 1)
        co++;
    }

    printf("There are %d odd numbers\n", co);
    printf("There are %d even numbers\n", ce);

    return 0;
}
