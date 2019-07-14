#include <stdio.h>
#define s 40
int main ()
{
    char r[s];
    int i,j;
        for (i=0;i<20;i++)
        {
            for (j=0;j<5;j++)
            {
                r[i][j]=0;
            }
            for (j=0;j<5;j++)
            {
                r[0][j]=1;
            }
        }

    for (i=1;i<20;i++)
    {
        for (j=i;j<5;j++)
        {
            r[i][j]=r[i][j-1]+r[i-1][j-1];
        }
    }






    return 0;
}
