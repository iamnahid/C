#include <stdio.h>
int fun ()
{
    int n;
    printf ("enter any number\n");
    scanf ("%d",&n);
    if(n>=10&&n<=90)
        return (n);
    else return (n+32);


}
int main ()
{
    fun ();

}
