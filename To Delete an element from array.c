#include <stdio.h>
int main()
{
    char st[1000];
    int i, c;

    gets(st);
    //printf("\n\n");

    for(i=0; i<=strlen(st); i++)
    {
      printf("%c --> %d\n", st[i], i+1);

    }

    printf("\nEnter element number you want to delete: ");
    scanf("%d", &i);

    st[i-1]=='\0';
    for(c=i; c<=strlen(st); c++)
    {
        st[i-1] = st[c];
        i++;
    }

    printf("The string is: %s ", st);



    return 0;
}
