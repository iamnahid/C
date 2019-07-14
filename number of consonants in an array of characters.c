#include <stdio.h>
int main ()
{
    char str[]= {'a','b','c','d','e','f','g','h','i'};
    int i, c = 0;

    for(i=0; i<=8; i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!= 'o' && str[i]!='u')
        {
            c+=1;
        }
    }

    printf("There are %d consonants", c);
    return 0;
}
