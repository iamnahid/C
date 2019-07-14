#include <stdio.h>
int main ()
{
    char st[1000], stp[1000] ;
    int i/*used only as a counter*/, j = 0 /*Used as a counter and a flag in loop-2*/;

    gets(st);

    for(i=strlen(st)-1; i>=0; i--)
    {
        stp[j] = st[i];
        j++;
    }

    j = 0;

    for(i=0; i<strlen(st); i++)
    {
        if(st[i] == stp[i])
        {
            j = 1;
        }
        else
            j = 0;
    }
    if(j == 1)
    printf("The string is a palindrome");

    else
        printf("Not a palindrome");
    return 0;

}
