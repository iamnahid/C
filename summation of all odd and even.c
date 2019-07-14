#include <stdio.h>
int main ()
{
    int marks[]={4,3,-20,6,7,8}, i, sumo = 0, sume= 0;

    for(i=0; i<=5; i++)
    {
        if(marks[i] % 2 == 0)
        {
            sume = sume + marks[i];
        }

        else if(marks[i] % 2 == 1)
        {
            sumo = sumo + marks[i];
        }
    }

    printf("Sum of Odd numbers: %d\n", sumo);
    printf("Sum of Even numbers: %d\n", sume);

    return 0;

}
