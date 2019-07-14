#include <stdio.h>
int main ()
{
    char st[10000];
    int i, c;

    printf("Enter a Sentence: ");
    gets(st);

    for(i=0; i<strlen(st); i++)
    {
        if((st[i] >= 97 && st[i] <= 122) && (st[i-1]==32 || st[i-1]=='\0'))
        {
            st[i] = st[i] - 32;
        }
    }
    puts(st);


    return 0;
}
