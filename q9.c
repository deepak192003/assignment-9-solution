// Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    switch (x%2==0)
    {
    case 1:
    printf("%d",x+1);
    break;
    case 0:
    printf("%d",x);
        break;
    default:
        break;
    }
}