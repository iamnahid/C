#include <stdio.h>
int main ()
{
    int a,i,c;
    printf("Enter a number\n");
    scanf("%d",&a);

    if(a<=2)
        printf("Inadmissible as Prime Number\n");
    if (a==3)
    {
        printf("Prime Number\n");
    }
    for(i=2;i<=a/2;i=i+1)
    {
        if(a%i==0)
            c=1;
        else if(a%i==1)
            c=0;

    }
    if (c==1)
    printf("Not Prime\n");

    else if (c==0)
    printf("Prime Number\n");

    return 0;

}
