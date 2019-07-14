#include<stdio.h>
int main()
{
    int ar[6]={4,3,-20,6,7,10},i,ocount=0,ecount=0 ;

    for(i=0;i<=5;i++)
    {
        if(ar[i]%2!=0)
        {
           ocount++ ;
        }

        if(ar[i]%2 == 0)
        {
            ecount++;
        }

    }

    printf("\nnumber of the odds = %d",ocount);
    printf("\nnumber of the evens = %d\n",ecount);


    return 0;
}


