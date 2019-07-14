#include<stdio.h>
int main()
{
    int marks[6]={4,3,-20,6,7,10},n;
    int i,q,c=0 ;

    printf("enter the number = ");
    scanf("%d",&n);

    for(i=0;i<=5;i++)
    {
       if(n!=marks[i]){
          continue ;
       }

       else if (n==marks[i]){
           printf("present");
           c=1 ;
       }
    }


    if(c!=1)
       printf("not present");






    return 0 ;
}
