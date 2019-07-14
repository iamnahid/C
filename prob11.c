#include<stdio.h>
int main()
{
    char str[]="abcdefghi";
    int d,i ;

    for(i=0;i<=9;i++)
    {
        d=(int) str[i] - 32 ;
        printf("%c",d);
    }

    return 0;
}

