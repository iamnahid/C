#include <stdio.h>


float add(float a, float b)
{
    float sum = 0;
    sum = a + b;
    return sum;
}

float sub(float a, float b)
{
    float res = 0;
    res = a - b;
    return res;
}

float mul(float a, float b)
{
    float res = 0;
    res = a * b;
    return res;
}

float div(float a, float b)
{
    float res=0;
    res = a / b;
    return res;
}

void signs(char c, float a, float b)
{

    if(c=='+')
        printf("=%.3f", add(a,b));

    else if(c=='-')
        printf("=%.3f", sub(a,b));

    else if(c=='x')
        printf("=%.3f", mul(a,b));
    else if(c=='/' && b>0)
        printf("=%.3f", div(a,b));
    if(b==0)
        printf("Maths Error\n");
}


void main ()
{
    float a, b;
    char c;
    printf("Enter a number: ");
    scanf("%f", &a);

    printf("Enter another number: ");
    scanf("%f", &b);
    printf("Add(+)\tSubtract(-)\tMultiply(x)\tDivide(/) \n\n");
    fflush(stdin);
    scanf("%c", &c);

    //scanf("%c", &c);

    signs(c,a,b);

}



