#include <stdio.h>
int main ()
{
    float consumption,amount=0;
    printf("Enter the Consumed Amount\n");
    scanf("%f",&consumption);


    if(consumption>0 && consumption <=200)
        amount= consumption * 0.5;
    else if(consumption>200 && consumption<=400)
        amount = 100 + (consumption - 200) * 0.65 + 200 * 0.5;
    else if(consumption>400 && consumption <=600)
        amount = 230 + (consumption - 400) * 0.80 + 400 * 0.65;
    else if(consumption >=601)
        amount = 390 + (consumption - 600)* 1 + 600 * 0.80;

    printf("The amount for consumption of %f unit is -->TK.%f\n",consumption, amount);

    return 0;
}
