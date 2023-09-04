//6. Write a program to swap values of two int variables without using third variable
#include<stdio.h>
main()
{
	int a,b;
	printf(" Enter value of a = ");
	scanf("%d",&a);
	printf(" Enter value of b = ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n value of 'a' after Swap = %d",a);
	printf("\n value of 'b' after Swap = %d",b);
	getch();
}
