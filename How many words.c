#include <stdio.h>
int main()
{
    char st[1000];
    int i, w = 0 ;

    gets(st);

    for(i=0; i<strlen(st); i++)
    {
        if(st[i]== 32 )
        {
            w++;

        }

        if(st[i+1]=='\0')

            w++;
    }

    printf("There are %d words", w);

    return 0;
}
