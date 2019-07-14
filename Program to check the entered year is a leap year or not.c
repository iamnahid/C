#include <stdio.h>
int main ()
{
    int a;
    printf("Enter a Year between 1980 and 2099\n");
    scanf("%d",&a);
    if (a<1980)
        printf("Subscript out of range\n");
    else if (a>2099)
        printf("Subscript out of range\n");
    else
    {
        if (a%4==0)
            printf("Entered Year is a Leap Year\n");
        else
            printf("Entered Year is Not a Leap Year\n");
    }
    return 0;

}
