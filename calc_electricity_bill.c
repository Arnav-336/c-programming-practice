#include<stdio.h>
int main()
{
    int unit,bill;
    printf("Enter the units consumed: ");
    scanf("%d",&unit);
    if(unit<=100)
    bill=unit*5;
    else if(unit<=200)
    bill=(500+(unit-100)*7);
    else
    bill=(1200+(unit-200)*10);
    printf("Your electricity bill is %d",bill);
}