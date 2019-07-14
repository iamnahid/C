#include <stdio.h>
int main (){
int N,R,c1=0;
     for (N=1 ; N<=100 ; N++)
     {
         for(R=2;R<=N-1 ; R++)
         {
             if(N%R==0)
                break ;
         }
         if(R==N)
         {c1=c1+1 ;
if (c1<=20)
            printf("the prime number is: %d\n",N);
         }
     }
    return 0;
}
