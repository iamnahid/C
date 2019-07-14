#include <stdio.h>
int main()
{
    char st[100] ;
    int i, len = 0;
    gets(st);

    for(i=0; i<strlen(st); i++)
    {
        if(st[i]!= (int)32 )
        {
            len++;
        }
    }
    printf("The Length of the string is %d", len);



    return 0;

}
