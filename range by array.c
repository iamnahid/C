#include<stdio.h>
#define m 10000
int main()
{
    int x[m] ,n, g ,count=0,i,big,small,k,range ;

    printf("please enter the amount of number that u would like to enter = ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
    {
        count++;
        printf("\n%d ------- = ",count);
        scanf("%d",&x[i]);
   }


     if(x[0]>x[1])
        {
            big=x[0];
            small=x[1];
        }

        else if (x[0]<x[1])
     {
           small=x[0];
            big=x[1];
    }

    for(g=0 ; g<=i ; g++)
    {

        k=g+1 ;


        if(x[g]>x[k])
        {
            if(x[g]>big)
                big=x[g];

            else
                big=big;

        }

        if(x[g]<x[k])
        {
            if(x[g]<small)
                small=x[g];
            else
                small=small;
        }

    }

    printf("\nthe largest number = %d",big);
    printf("\nthe smallest number = %d",small);


    printf("\nrange of the data set = %d\n",big-small);


    return 0 ;
}
