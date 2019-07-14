#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
    char str;
    int i, v=0, c=0;

    fflush(scanf("%c", &str));

    while(str[i]!='/0')
    {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            v+=1;
        }
        else if(str[i]=='a' && str[i]=='e' && str[i]=='i' && str[i]=='o' && str[i]=='u')
        {
            c+=1;
        }
    }
        printf("There are %d vowels\n", v);
        printf("There are %d vowels\n", v);

    return 0;
}
