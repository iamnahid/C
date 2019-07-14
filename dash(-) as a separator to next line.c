#include <stdio.h>
int main ()
{
    char st[100000];
    int i/*for loop 1*/,c = 0/*for loop 2*/, s[10000]/*array for storing - position */, p = 0/*position # of -*/;

    gets(st);

    printf("\nThe separated words from your string are:\n\n");

    for(i=0; i<strlen(st); i++)
    {
        if(st[i]==45)
        {
        s[p] = i;
        p++;
        }
    }

        p = 0;
        label1:
        for(c=s[p]-1; c<s[p]; c++)
        {
            printf("%c", st[c]);

        }
        p++;
        while(s[p]!='\0')
        {
            goto label1;
        }



    return 0;
}
