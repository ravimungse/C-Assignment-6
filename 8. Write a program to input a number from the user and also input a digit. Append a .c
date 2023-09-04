//8. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
main()
{
    int a,b,c;
    printf(" Enter a Number =  ");
    scanf("%d",&a);
    printf(" Enter a Digit =  ");
    scanf("%d",&b);
    c=a*10+b;
    printf(" Resulting Number = %d",c);
    getch();
}
