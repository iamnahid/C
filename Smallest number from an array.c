#include <stdio.h>
int small(int arr[10])
{
    int i, min = 1000000000;
    for(i = 0; i<10; i++)
    {
        if(arr[i]<min)
        min = arr[i];
    }

    return min;
}

int main()
{
    int arr[]= {-2,5,5,89,7,89,65,65,897,56,6561};

     printf("The largest element of the array is: %d\n", small(arr));
}
