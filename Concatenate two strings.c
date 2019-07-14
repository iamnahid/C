#include <stdio.h>
int main()
{
    char st[1000], st2[1000], stc[3000];
    gets(st);
    gets(st2);

    int i, j=0;

    for(i=0; i<strlen(st); i++)
    {
        stc[i] = st[i];
    }
    for(i=strlen(st); i<strlen(st)+strlen(st2); i++)
    {
        stc[i] = st2[j];
        j++;
    }

    puts(stc);

    return 0;


}

