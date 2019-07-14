#include <stdio.h>
int checkp(int SIZE, int arrn[SIZE])
{
    int i, c, arrp[SIZE], n=0;
    for(i=0; i<SIZE; i++)
    {
        if(arrn[i]>1)
        {
            for(c=2; c<=arrn[i]/2 ; i++)
            {
                if(arrn[i] % c == 0)
                {
                    break;
                }
                if(c==arrn[i]/2 + 1)
                {
                    arrp[n]= arrn[i];
                    n++;
                }

            }

        }
    }

    return arrp[SIZE];
#include <stdio.h>
int main ()
{
    int n, i, k, p=0, c=0;
    printf("Enter how many prime numbers you want to show: ");
    scanf("%d", &n);

    printf("The first %d prime numbers are: \n", n);


        for(i=3; i<10000000; i+=2)
        {
            for(k=2; k<=i; k++)
            {
                if(i % k == 0){
                    p = 0;
                    break;

                }
                if(k == i/2 + 1)
                {
                    printf("%d\n", i);
                    p = 1;
                    c++;
                }
            }

            if(p=0)
                i--;

            if(c==n)
                break;
        }

    return 0;
}

}
int main ()
{
    int s;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &s);
    #define SIZE s

    int arrn[SIZE], i;
    printf("\nEnter numbers into the array:\n");

    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arrn[i]);
    }

    int prime[SIZE];
    prime[SIZE] = checkp(SIZE, arrn);

    for(i=0; i<SIZE; i++)
    {
        printf("Prime numbers you entered are %d:\n", prime[i]);
    }
return 0;

}
