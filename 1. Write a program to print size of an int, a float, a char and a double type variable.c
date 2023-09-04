//1. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
main()
{
	int a;
	float b;
	char c;
	double d;
	printf(" size of int: %lu Bytes",sizeof(int));
	printf("\n size of float: %lu Bytes",sizeof(float));
	printf("\n size of char: %lu Bytes",sizeof(char));
	printf("\n size of double: %lu Bytes",sizeof(double));
	getch();
}
