#include<stdio.h>
int main()
{
    int no1,no2,no3;
    printf("Enter the first number: ");
    scanf("%d",&no1);
    printf("Enter the second number: ");
    scanf("%d",&no2);
    printf("Enter the third number: ");
    scanf("%d",&no3);
    if (no1>no2&&no1>no3)
    printf("The largest no. is %d",no1);
    else if (no2>no3&&no2>no1)
    printf("The largest no. is %d",no2);
    else
    printf("The largest no. is %d",no3);
}