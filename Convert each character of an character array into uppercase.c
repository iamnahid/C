#include <stdio.h>
int main ()
{
    char str[]="abcdefghi", u;
    int i;

    for (i=0; i<=8; i++)
    {
        u = str[i] - 32;

        printf("%c\n", u);
    }
    return 0;
}
