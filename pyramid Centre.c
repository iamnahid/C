#include <stdio.h>
int main ()
{
    int r;
    printf("Enter no of rows you want: ");
    scanf("%d",&r);

    int row,colspace;
    float star;
    printf("\n");
    for(row=1;row<=r;row++)
    {
        for(colspace=1;colspace<=r-row;colspace++)
            printf("  ");
        for(star=1;star<=row;star+=0.5){
            printf(" *");
        }
        printf("\n");

    }

}
