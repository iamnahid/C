/*Write a program to find the numbers that are
greater than 100 and less than 200 and divisible by 7.
Also find the sum of all those integers.*/

#include <stdio.h>
int main()
{
    int i,s=0;
    printf("The numbers greater than 100 and less than 200 divisible by 7 are:\n");
    for(i=100;i<=200;i++)
    {
        if(i%7==0)

        printf("%d\n",i);
        s=s+i;
    }
    printf("\nThe sum of all the multiples of 7 from 100 to 200 is = %d\n",s);

    return 0;

}


