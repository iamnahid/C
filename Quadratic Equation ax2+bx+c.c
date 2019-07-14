#include <stdio.h>
#include <math.h>

float quad1(int a, int b, int c)
{
    int z = b * b - 4 * a * c;
    float x1 = ((-b + sqrt(z)) / (2 * a));
    printf("The value of sqrt is: %f\n", sqrt(z));
    return x1;
}

float quad2(int a, int b, int c)
{
    int z = b * b - 4 * a * c;
    float x2 = ((-b - sqrt(z)) / (2 * a));
    return x2;
}

int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);


    printf("x = %f and x = %f ", quad1(a, b, c), quad2(a, b, c));

}
