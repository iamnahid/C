#include<Stdio.h>
int main()
{
    int marks[6]={4,3,-20,6,7,10},i,sum=0;


    for(i=0;i<=5;i++)
    {
        sum=sum+marks[i];
    }

    printf("the summmation = %d",sum);

    return 0 ;
}
