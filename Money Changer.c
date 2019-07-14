#include <stdio.h>
int main ()
{
    int m, nthou, thou, huns, fifty ;

    printf("Enter amount of money: ");
    scanf("%d", &m);

    nthou = m % 1000;
    thou = m / 1000;

    if(thou>0){
        printf("Change with %d Tk.1000 notes\n", thou);
    }

    if(nthou>0){
        if((nthou-500)>0){
            printf("\tand 1 Tk.500\n");
        }

        huns = nthou - 500;


    }



    return 0;
}
