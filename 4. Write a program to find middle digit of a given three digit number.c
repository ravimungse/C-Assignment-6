//4. Write a program to find middle digit of a given three digit number
#include<stdio.h>
main()
{
	int a,b,c;
	printf(" Enter Three Digit number = ");
	scanf("%d",&a);
	b=a/10;
	c=b%10;
	printf(" Middle Digit = %d",c);
	getch();
}
