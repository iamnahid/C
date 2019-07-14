#include <stdio.h>
#include <string.h>

int lar(int arr[7])
{
    int i, max = 0;
    for(i= 0; i<=6; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    //printf("something = %d\n", strlen(arr));

    return max;

}

int main ()
{
    int arr[] = {14589,6,85,45,420,12,898}, max;

    printf("The largest element of the array is: %d\n", lar(arr));

}
