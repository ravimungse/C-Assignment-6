//7. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter The Number = ");
	scanf("%d",&a);
	b=a/10*10;
	printf("Output number = %d",b);
	getch();
}

