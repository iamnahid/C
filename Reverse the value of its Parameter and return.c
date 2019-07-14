#include <stdio.h>

rev(int *arr, int size)
{
    int i, j=0;
    char r[5];
    for(i=size; i>=0; i--)
    {
        r[j] = arr[i];
    }

    return r;

}

int main ()
{
    char arr[5], arrn[5];
    int i, *p;

    printf("Enter a text to reverse\n");
    gets(arr);
    p = rev(&arr, 5);
    printf("The reversed text is:\n");
    for(i=0; i<5;i++)
    {
        printf("%c",arrn[*(p+i)]);
    }
}
