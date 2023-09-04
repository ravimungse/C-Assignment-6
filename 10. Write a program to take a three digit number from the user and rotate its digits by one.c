//10. Write a program to take a three digit number from the user and 
//rotate its digits by one position towards the right.
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter the Three digit Number = ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    printf("After one rotation final number = %d%d",b,c);
    getch();
}

