#include <stdio.h>
int main ()
{
    char st[1000];
    int i;

    gets(st);
    for(i=0; i<=strlen(st); i++)
    {
        if(st[i]>=65 && st[i]<=90)
            st[i]+=32;

 else if(st[i]>=65+32 && st[i]<=90+32)
            st[i]-=32;

    }

    puts(st);
    return 0;
}
