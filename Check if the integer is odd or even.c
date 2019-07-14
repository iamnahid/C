#include <stdio.h>
int main ()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("You have entered an even number\n");
    else
        printf("You have entered an odd number\n");
    return 0;

}
