#include <stdio.h>
int main()
{
    int a;
    printf("Input a number\n");
    scanf("%d",&a);
    printf("%s\n", a%2==0 ? "The number is Even" : "The number is Odd");
    return 0;

}


