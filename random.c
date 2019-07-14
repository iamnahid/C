#include <stdio.h>

int main () {

   char string1[110],string2[110];
    printf("Give the strings\n");
    gets (string1);
    gets (string2);
   printf("%s\n %s\n",string1,string2);

        strcpy (string1,string2);
        printf("%s\n %s",string1,string2);
return 0;
}
