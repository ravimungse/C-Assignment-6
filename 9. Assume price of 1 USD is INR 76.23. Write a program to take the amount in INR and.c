//9. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
#include<conio.h>
main()
{
    float a,b=76.23; // a= INR, b= USD.
    printf("Enter INR amount  = ");
    scanf("%g",&a);
    b=b*a;
    printf("INR converted to USD = %g",b);
    getch();
}

