// Write a program which takes the day number of a week and displays a
// unique greeting message for the day
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter your choice(1-7)");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
       printf("Hey Dear !\n\t\tThis Monday you enjoy full of happiness as you want\n\t Enjoy your day ");
        break;
    case 2: 
    printf("Hey Dear !\n\t\t This Tuesday you enjoy full of toor anywhere in INDIA as you want\n\t Enjoy your day");
    break;
    case 3:
    printf("Hey Dear !\n\t\t This Wednesday you enjoy eat your best food as you want\n\t Enjoy your day");
    break;
    case 4: 
    printf("Hey Dear !\n\t\t This Thursday you enjoy full of romance with your life partner as you want\n\t Enjoy your day");
    break;
    case 5:
    printf("Hey Dear !\n\t\t This Friday you enjoy worship with god \n\t Enjoy your day");
    break;
    case 6:
    printf("Hey Dear !\n\t\t This Saturday you want to go to Goa \n\t Enjoy your day");
    break;
    case 7:
    printf("Hey Dear !\n\t\t This Sunday you enjoy in your office  as you want\n\t Enjoy your day");
    break;
    default:
        break;
    }
}