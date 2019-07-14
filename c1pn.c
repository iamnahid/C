#include <stdio.h>
int main(){
int a,b,c,d,c1=0,s1=0,c2=0,s2=0;
while(1)
{printf ("input ur desired number: ");
scanf ("%d",&a);
        if(a==0)break;
    else if(a<0)
        {
            c1++;
            s1=s1+a;
    }
    else if (a>0){
            c2++;
            s2=s2+a;
    }
}
printf ("the count of negative numbers is: %d\n",c2);
printf ("the count of positive numbers is: %d\n",c1);
printf ("the summation of negative numbers is: %d\n",s1);
printf ("the summation of positive numbers is: %d\n",s2);
return 0;
}
