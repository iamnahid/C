    #include <stdio.h>
    int main ()
    {
        int a,b,c;
        printf("Enter Number-1\n");
        scanf("%d",&a);

        printf("Enter Number-2\n");
        scanf("%d",&b);

        printf("Enter Number-3\n");
        scanf("%d",&c);

        if (a>b && a>c)
            printf("Number-1 is Largest, i.e--> %d\n",a);
        else if (b>a && b>c)
            printf("Nuumber-2 is Largest, i.e--> %d\n",b);
        else if (c>a && c>b)
            printf("Nuumber-3 is Largest, i.e--> %d\n",c);

        return 0;
    }
