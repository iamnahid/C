/*Input  a  number  from keyboard.
Say  “Zero”  if  the  input  is  0,  say  “One”  if  1  is  input, say
“Two”  if the input is 2 and so on.  Do it for 0-9.
If any number other than these values are
entered say “Invalid Number”. Do it using switch-case. */

#include <stdio.h>
int main ()
{
    int a;
    printf("Enter a Number between 0-9\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1 :
            printf("One");
            break;
        case 2 :
            printf("Two");
            break;
        case 3 :
            printf("Three");
            break;
        case 4 :
            printf("Four");
            break;
        case 5 :
            printf("Five");
            break;
        case 6 :
            printf("Six");
            break;
        case 7 :
            printf("Seven");
            break;
        case 8 :
            printf("Eight");
            break;
        case 9 :
            printf("Nine");
            break;
        default:
            printf("Invalid Number");
            break;

    }

    return 0;

}
