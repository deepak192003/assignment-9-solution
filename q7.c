 /*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
int main()
{
    float electricunit;
    float amount,total;
    printf("Enter electricity unit charges: ");
    scanf("%f",&electricunit);

switch (electricunit<=50)
{
case 1:
 amount=electricunit*0.5;
 break;

 case 0:  switch (electricunit<=150)
 {
 case 1:
 amount= 25+ (electricunit-50)*0.75;
 break;

 case 0:   switch ( electricunit<=250)
 {
 case 1:
    amount= 100+(electricunit-150)*1.2;
    break;
 case 0:
 amount= 220+(electricunit-250)* 1.5;
 break;
 default:
    break;
 }break;

 }break;

}
total=total+amount;
printf("%f",total);
}