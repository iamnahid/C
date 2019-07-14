#include <stdio.h>
int main()
{
    int marks[]= {4,3,-20,6,7,10}, i;

    for(i=0; i<=5; i++)
    {
        if(marks[i]<0)
        printf("Negative value found in the array\n");
    }

    return 0;
}
