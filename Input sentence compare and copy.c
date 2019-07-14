#include <stdio.h>
//#include <string.h>
int main ()
{
    char a1[100], a2[100];

    gets(a1);
    gets(a2);

    if(strcmp(a1,a2)!=0)
    {
        printf("Strings Not Identical\n");

        printf("string 1 = %s \nstring 2 = %s\n", a1, a2);
        strcpy(a1,a2);

        printf("\nStrings Modified\n");
        printf("string 1 = %s \nstring 2 = %s\n", a1, a2);



    }
return 0;
}
