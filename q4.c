/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
int main()
{
    int a,b,c,choice,sum,h;
    while (choice!=4)
    {
        printf("Menu");
    printf("\n1.Check whether a given set of three numbers are lengths of an isosceles triangle or not\n2. Check whether a given set of three numbers are lengths of sides ofa right angled triangle or not\n3. Check whether a given set of three numbers are equilateral triangleor not\n4. Exit");

printf("\nEnter what you want from the menu");
scanf("%d",&choice);

switch (choice)
{
    
case 1:
printf("\nEnter three numbers: ");
scanf("%d%d%d",&a,&b,&c);
        if(a==b)
        {
            printf("Yes the given value is the sides of an isoceles triangle");
        }
        else if(b==c)
        {
                        printf("Yes the given value is the sides of an isoceles triangle");

        }
         else if(a==c)
        {
                        printf("Yes the given value is the sides of an isoceles triangle");

        }
        else
        {
            printf("No the given value is not the sides of an isoceles triangle");
        }
        break;
        case 2:
printf("\nEnter three numbers: ");
scanf("%d%d%d",&a,&b,&c);
sum=a*a+b*b;
h=c*c;
if(sum==h)
{
    printf("Yes the given value is the sides of right angled triangle");
}
else
{
    printf("No the given value is not a sides of right angled triangle");
}
break;
case 3:
printf("\nEnter three numbers: ");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
{
   if(a==c){
        printf("Yes the given sides is of the equilateral triangle");

   }
    
}
else
{
    printf("No the given sides is not the sides of equilateral triangle");
}
break;
case 4:
break;

default:
    printf("Wrong choice");
    break;
}

    }
}
