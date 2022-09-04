// Write a program which takes the month number as an input and display
// number of days in that month.
#include<stdio.h>
int main()
{
    int monthnumber;
    printf("Enter the month number between 1-12: ");
    scanf("%d",&monthnumber);
    switch (monthnumber)
    {
    case 1:
        printf("31");
        break;
    
    case 2:
        printf("28");
        break;
    case 3: 
        printf("31");
break;
    case 4:
        printf("30");
break;
    case 5:
        printf("31");
    break;
    case 6: 
        printf("30");
break;
    case 7: 
        printf("31");
break;
    case 8:
        printf("31");
break;
    case 9:
        printf("30");
break;
    case 10:
        printf("31");
      break;  
    case 11: 
        printf("30");
    break;
    case 12:
        printf("31");
        break;

default:
    break;

            }
}
