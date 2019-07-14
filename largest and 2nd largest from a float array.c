#include <stdio.h>
int *larg(int *l, int size)
{
    int i;
    float large = -10000000, large2;

    for(i=0; i<size; i++)
    {
        if(large<*l[i])
            large = *l[i];

        l++;
    }

    for(i=0; i<size; i++)
    {
        if(large>*l)
            large2 = *l;
    }

    return &large2;
}

int main ()
{
    float arr[10];
    int i, *L;
    printf("Enter elements into the array:\n");
    for(i=0; i<10; i++)
    {
        scanf("%f", &arr[i]);
    }

    *L = larg(&arr, 10);

    printf("The second largest value is: %d", *L);

}
