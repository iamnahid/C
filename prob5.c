#include<stdio.h>
int main()
{
    int ar[6]={4,3,-20,6,7,10},i,count=0,osum=0,esum=0 ;

    for(i=0;i<=5;i++)
    {
        if(ar[i]%2!=0)
        {
           osum=osum+ar[i];
        }

        if(ar[i]%2 == 0)
        {
            esum=esum+ar[i];
        }

    }

    printf("\nsummation of the odds = %d",osum);
    printf("\nsummation of the evens = %d\n",esum);


    return 0;
}

