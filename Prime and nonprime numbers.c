#include <stdio.h>
int main ()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>1){
        for(i=2; i<=n; i++)
        {
            if(n % i == 0)
                {
                printf("Not a Prime Number\n");

                }

           else if(i == (n+ 1))
            {
                printf("Prime Number\n");

            }
        }
    }

    return 0;
}
