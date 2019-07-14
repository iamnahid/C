#include <stdio.h>

int main()
{
	int a[10]={4,56,-45,101,11,2,77,158,22,80};
	int  i=0,j=0,t;
	char n,A,D;

    printf ("Your Initial data: 4 56 -45 101 11 2 77 158 22 80\n\n\n");
    printf ("\nFor ascending mode press A or descending mode press D: \t");

scanf ("%c",&n);

for (j=0 ; j<(10-1) ; j++)
	{
		for (i=0 ; i<(10-1) ; i++)
		{
			if (a[i+1] < a[i])
			{
				t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
			}
		}
	}


if (n=='A')

{
    for (j=0 ; j<(10-1) ; j++)
	{
		for (i=0 ; i<(10-1) ; i++)
		{
			if (a[i+1] < a[i])
			{
				t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
			}
		}
	}

    printf ("\n Ascending order: \n\n");
	for (i=0 ; i<10 ; i++)
	{
		printf (" %d", a[i]);
	}

}


 if (n=='D')
 {
     for (j=0 ; j<(10-1) ; j++)
	{
		for (i=0 ; i<(10-1) ; i++)
		{
			if (a[i+1] < a[i])
			{
				t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
			}
		}
	}

     printf ("\n Descending order: \n\n");
	for (i=10 ; i>0 ; i--)
	{
		printf (" %d", a[i-1]);
	}
 }






    printf ("\n\n");

      return 0;
}
