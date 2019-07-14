#include<stdio.h>
int main()
{
    int marks[6]={4,3,-20,6,7,10},i,d=0 ;

    for(i=0;i<=5;i++)
    {
        if(marks[i]<0)
          printf("there is a negative");
    }

    return 0 ;

}
