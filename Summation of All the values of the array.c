#include <stdio.h>
int main ()
{
    int marks[]={4,3,-20,6,7,10}, i, sum = 0;

    for(i=0; i<=5; i++)
    {
        sum += marks[i];

    }

    printf("The sum of the array items is: %d", sum);
    return 0;
}
