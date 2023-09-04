//3. Write a program to find first digit of a given three digit number
#include<stdio.h>
main()
{
	int a,b;
    printf(" Enter any Three Digit number= ");
    scanf("%d",&a);
    b=a/100;
    printf(" The First Digit of entered number = %d",b);
    getch();
}
