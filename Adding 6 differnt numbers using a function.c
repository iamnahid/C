#include <stdio.h>
int add(int a, int b, int c, int d, int e, int f)
{
    int sum = 0 ;

    sum = a + b + c + d + e + f;

    return(sum);

}
void main()
{
    int a, b, c, d, e, f;
    printf("Enter six values:\n");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);


    printf("The sum of the numbers: %d",  add(a, b, c, d, e, f));

}
