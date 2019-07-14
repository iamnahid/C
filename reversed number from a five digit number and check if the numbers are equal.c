#include <stdio.h>
int main ()
{
    int s,n,c1,c2,c3,c4,c5;

    printf("Enter a number: ");
    scanf("%d",&n);
    s=n;
    c1= n % 10;
    n = n / 10;
    c2 = n % 10;
    n = n / 10;
    c3 = n % 10;
    n = n / 10;
    c4 = n % 10;
    n = n / 10;
    c5 = n % 10;
    printf("The reversed number is: %d%d%d%d%d\n",c1,c2,c3,c4,c5);

    //c="c1"+"c2"+"c3"+"c4"+"c5";
    //printf("%c\n",c);
/*    if (int(c)==s)
        printf("Original and reversed number are equal\n");
    else
        printf("Original and reversed number not equal\n");

*/
    return 0;

}
