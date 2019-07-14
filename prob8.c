#include<stdio.h>
int main()
{
    char str[]= "abcdefghi";

    int i,count = 0;


    for(i=0;i<=8;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++ ;

        }
    }

    printf("the number of vowels = %d",count);

    return 0 ;
}
