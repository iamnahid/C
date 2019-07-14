#include<stdio.h>
int main()
{
    int ar[6]={4,3,-20,6,7,10},i,count=0 ;

    for(i=0;i<=5;i++)
    {
        if(ar[i]%2!=0)
        {
            count++ ;
            printf("%d odd = %d\n",count,ar[i]);
        }
    }

    return 0;
}
