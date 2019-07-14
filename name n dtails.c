#include <stdio.h>
int main ()
{
    char r;

        scanf ("%c",&r);

    switch (r)
    {
    case 'T':
        printf ("\t");
        printf ("he is an EXCELLENT BUSSINESSMAN!\n");
        break;
    case 's':
        printf ("\t");
        printf ("he is an ENTERTAINER!\n");
        break;
    case 'A':
        printf ("\t");
        printf ("he is a MASTERMIND!\n");
        break;
    case 'S':
        printf ("\t");
        printf ("he is A GOOD BOY!\n");
        break;
    case 'N':
        printf ("\t");
        printf ("HE IS A PROGRAMMER!\n");
        break;
    case 'M':
        printf ("\t");
        printf ("HE IS NAHIDS FREIND!\n");
        break;
    default:
        printf ("\t");
        printf ("HE IS NOT IN NAHIDS FRIENDLIST!\n");
        break;

    }




    return 0;
}
