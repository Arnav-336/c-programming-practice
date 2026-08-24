#include<stdio.h>
int main()
{
    int no1,no2,temp;
    printf("Enter the values: ");
    scanf("%d%d",&no1,&no2);
    printf("Before swapping num1 = %d and num2 = %d",no1,no2);
    temp=no1;
    no1=no2;
    no2=temp;
    printf("\nAfter swapping num1 = %d and num2 = %d",no1,no2);
}