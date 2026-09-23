#include<stdio.h>
int main()
{
    int no1,no2,res,choice;
    printf("Welcome to Arithmetic Operations");
    printf("\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.MODULUS");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&no1,&no2);
    switch(choice)
    {
        case 1:res=no1+no2;
        printf("The sum of %d and %d is %d",no1,no2,res);
        break;
        case 2:res=no1-no2;;
        printf("The difference of %d and %d is %d",no1,no2,res);
        break;
        case 3:res=no1*no2;
        printf("The product of %d and %d is %d",no1,no2,res);
        break;
        case 4:res=no1/no2;
        printf("The division of %d and %d is %d",no1,no2,res);
        break;
        case 5:res=no1%no2;
        printf("The modulus of %d and %d is %d",no1,no2,res);
        break;
        default:("Wrong Choice");
    }
}