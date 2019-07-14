#include <stdio.h>
int main ()
{
    int i, ax[5], c=1;

    for(i=0; i<=4; i++)
    {
        ax[i]= c;
        c++;

    }

    for(i=4; i>=0; i--)
    {
        printf("Array Element %d: %d\n", i+1, ax[i]);
    }

    return 0;

}
