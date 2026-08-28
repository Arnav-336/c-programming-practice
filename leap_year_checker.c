#include<stdio.h>
int main()
{
    int no1;
    printf("Enter the year: ");
    scanf("%d",&no1);
    if(no1%400==0||(no1%4==0&&no1%100!=0))
    printf("%d is a leap year",no1);
    else
    printf("%d is not a leap year",no1);
}