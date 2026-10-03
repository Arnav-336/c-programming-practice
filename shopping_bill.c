#include<stdio.h>
int main()
{
    int total,bill;
    printf("Enter the total value of your items: ");
    scanf("%d",&total);
    if(total<=1000)
    {
        bill=total;
        printf("Your total bill is %d",bill);
    }
    else if(total<=3000&&total>1000)
    {
        bill=total-(5*total)/100;
        printf("Your total bill is %d",bill);
    }
    else if(total<=6000&&total>3000)
    {
        bill=total-(7*total)/100;
        printf("Your total bill is %d",bill);
    }
    else if(total<=10000&&total>6000)
    {
        bill=total-(10*total)/100;
        printf("Your total bill is %d",bill);
    }
    else
    {
        bill=total-2000;
        printf("Your total bill is %d",bill);
    }
}