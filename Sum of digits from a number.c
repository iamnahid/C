#include <stdio.h>

int main()
{
    int n,s=0,c1=0,c2=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    while(n>9)
    {
        c1 = n % 10;
        c2 = n / 10;
        s = s + c1;
        n = c2;
    }
    s = s + c2;
    c1 = s / 10;
    c2 = s % 10;
    s = c1 + c2;


    printf("\nThe Sum of digits of the number is: %d\n",s );

    return 0;


}
