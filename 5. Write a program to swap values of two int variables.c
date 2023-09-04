//5. Write a program to swap values of two int variables
#include<stdio.h>
main()
{
	int a,b,c;
	printf(" Enter Value of a = ");
	scanf("%d",&a);
	printf(" Enter Value of b = ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n The Valve of a after swap = %d",a);
	printf("\n The Valve of b after swap = %d",b);
	getch();
}
