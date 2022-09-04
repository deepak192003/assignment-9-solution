// Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch (num>0)
    {
    case 1:
            result=-num;
            printf("%d",result);
            break;
            case 0: 
            result=-num;
            printf("%d",result);
        break;
    
    default:
        break;
    }
}