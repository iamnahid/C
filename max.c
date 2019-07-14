#include<stdio.h>
int max3(int a,  int b,  int c)
{
	int max;
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	//printf("The largest of %d %d %d is %d\n\n", a,b,c, max);
	return max;
}
int main()
{
	int x,y,z;
	x = 10;
	y = 30;
	z = 15;
	int m=max3(x,y,z);	  /* call function */
	printf("max in main : %d",m*2);

	m=max3(x,y,z);	  /* call function */
	printf("max in main : %d",m);

	return 0;
}
