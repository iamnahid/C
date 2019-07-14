#include <stdio.h>
int main()
{
    int a;
    printf("Input a number\n");
    scanf("%d",&a);
    a%2==0 ?    printf("The number is even\n") : printf("The number is Odd\n");
    return 0;
}
