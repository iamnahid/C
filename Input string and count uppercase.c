#include <stdio.h>
int main ()
{
    char st[1000];
    int i, c=0;
    gets(st);

    for(i=0; i<=strlen(st); i++)
    {
        if(st[i]>=65 && st[i]<=90)
        {
            c++;
        }
    }

    printf("\nThere are %d Upper Case Letters\n", c);
    return 0;
}
