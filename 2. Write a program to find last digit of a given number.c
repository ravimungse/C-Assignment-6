//2. Write a program to find last digit of a given number
#include<stdio.h>
main()
{
	int a,b;
	printf(" Enter The Number = ");
	scanf("%d",&a);
	b=a%10;
	printf(" Last Digit of Entered number = %d",b);
	getch();
}
