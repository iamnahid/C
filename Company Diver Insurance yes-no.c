//This program is intended to solve the following question:
/*A company insures its drivers in the following cases:
	- If the driver is married.
	- If the driver is unmarried, male and above 30 years of age
	- If the driver is unmarried, female and above 25 years of age
	In all other cases the driver is not insured. If the marital status, sex and age of the driver are entered through the keyboard, write a program to determine whether the driver is to be insured or not.
*/
#include <stdio.h>
int main ()
{
    int age;
    bool g;
    bool ms;

    printf("Are You Married?\nPress Y or N\n");
    scanf("%s",&ms);

    printf("Enter your Age\n");
    scanf("%d",&age);

    printf("Press M for Male or F for Female\n");
    scanf("%s",&g);

    if(ms=='N' || ms=='n' && g=='M' || g=='m' && age>=30){
        printf("Valid for Insurance\n");
    }

    else if(ms=='N' || ms=='n' && g=='F' || g=='f' && age>=25){
        printf("Valid for Insurance\n");
    }

    else if(ms=='Y' || ms=='y'){
        printf("Valid for Insurance\n");
    }
    else {
        printf("Invalid for Insurance\n");
    }

    return 0;

}
