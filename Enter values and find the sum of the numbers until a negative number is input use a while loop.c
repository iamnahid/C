/*Write  a  program segment  that  reads  and  sums data  values  until  a
negative  value  is  read.
Use a while loop for your solution. */

#include <stdio.h>
int main ()
{
    int a,s=0;
    printf("Enter a number, enter x number to finish\n");
    scanf("%d",&a);
    while(a>0)
    {
        s=s+a;
        scanf("%d",&a);
    }
    printf("-------\n=%d\n",s);

    printf("This is the sum of all the numbers that you have entered\n");
    return 0;

}
