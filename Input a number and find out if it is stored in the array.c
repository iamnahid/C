#include <stdio.h>
int main ()
{
    int marks[]={4,3,-20,6,7,10}, n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<=5; i++)
    {
        if(n==marks[i])
        {
            printf("The value is available in the array\n");
            flag = 1;
        }
    }

    if(flag==0)
    printf("The value is not found\n");


    return 0;

}
