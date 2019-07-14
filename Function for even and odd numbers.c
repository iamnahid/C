#include <stdio.h>
int main ()
{
    int n, o, e;

    printf("Enter a number: ");
    scanf("%d", &n);

    o=odd(n);
    if(o==1)
    printf("The number is Odd");

    e=even(n);
    if(e==0)
        printf("The number is Even");


}

int odd(int n)
{
    if(n % 2 == 1)

        return n%2;
}

int even(int n)
{

    if(n % 2 == 0)

        return n%2;
}
