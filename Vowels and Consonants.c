#include <stdio.h>
int main()
{
    int i,n=0,v=0,c=0;
    char a;

    printf("Enter Number of Characters you want to input\n");
    scanf("%d",&n);

    printf("Write single characters\n");

    for(i=1;i<=n;i=i+1)
    {
        scanf("%s",&a);
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'||a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
            v=v+1;
        else
            c=c+1;
    }
    printf("Number of Vowels is: %d\n",v);
    printf("Number of Consonants is: %d",c);
    return 0;

}
