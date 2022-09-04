/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
int main()
{
    int a,b,choice;
    float c,d;
    
   
while (choice!=5)
{
    printf(" \nMenu  ");
    printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication \n 4. Division \n 5. exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Addition of two number is %d",a+b);
        break;
    
   case 2:
   printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Subtraction of two number is %d",a-b);
    break;
    
case 3:
printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Multiplication of two number is %d",a*b);
    break;

case 4:

printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Division of two number is %f",a/b);
    break;

case 5:
break;

default:
printf("Wrong choice");
break;
}

    
}
}