#include <stdio.h>
int main()
{
    int a,sum=0,c=0;
    printf("To end executing the program input a negative number\n\n");
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a>=0)
        {
            sum = sum + a;
            c= c + 1;
            printf("Sum: %d\n\n",sum);
        }
        else
        {
            printf("________________________________\n");
            printf("The total sum is %d\n",sum);
            printf("You have given %d number input",c);
            return 0;

        }


    }
    return 0;


}
