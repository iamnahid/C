#include<stdio.h>
int main()
{
    int S,B,c1=0,c2=0,c3=0,s1=0,s2=0,s3=0,i1,i2,i3,r,n,k,f,s,N,R,j;

    printf("Input your begining limit for odd number : ");
    scanf("%d",&S);

    printf("\nInput your ending limit for odd number : ");
    scanf("%d",&B);

      r=S;n=B;k=S%2;f=B%2;
      if(k==0)
        r++ ;
        if(f==0)
            n--;


    for(j=r ; j<=n ; j+=2)
    {
        c1=c1+1;
        s1=s1+j;
        printf("\n\nthe odd number is %d\n",j);
}

    printf("\n\n the summation of the odd numbers = %d\n",s1);

    printf("\n\n  ***||^^^^ welcome t0 2nd floor ^^^^***||\n\n");

     printf("Input your begining limit for even number : ");
    scanf("%d",&S);

    printf("\nInput your ending limit for even number : ");
    scanf("%d",&B);

      r=S;
      n=B;
     k=S%2 ;
     f=B%2;

     if(k!=0)
        r++ ;

    if(f!=0)
f--;

    for(s=r;s<=n;s+=2)
    {
        c2=c2+1 ;
        s2=s2+s ;

        printf("\n\nthe even number is %d\n",s);
    }

      printf("\n\nsummation of the even numbers = %d\n",s2);


       printf("\n\n||***^^^^ welcome t0 3rd floor ^^^^***||\n\n");

printf("input your lower limit for prime number : ");
     scanf("%d",&S);

     printf("\ninput your upper limit for prime number : ");
     scanf("%d",&B);

     for (N=S ; N<=B ; N++)
     {
         for(R=2;R<=N-1 ; R++)
         {
             if(N%R==0)
                break ;

         }

         if(R==N)
         {
             c3=c3+1 ;
             s3= s3+N ;
             printf("\n\nthe prime number is: %d\n",N);
         }
     }

     printf("\n\nsummation of the prime numbers: %d\n",s3);

    return 0;
}

