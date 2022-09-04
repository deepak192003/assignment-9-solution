// Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int year,leapyear;
    printf("Enter year: ");
    scanf("%d",&year);
leapyear= year%400==0 ||year%4==0 || year%100==0;
    switch (leapyear)
    {
        case 1:
        printf("Yes the given year is leap year");
        break;
        case 0:
        printf("No the given year is not leap year");
        break;
        default:
        printf("No the given year is not leap year");

    }
}
