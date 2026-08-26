#include<stdio.h>
int main()
{
    int no1,no2,large;
    printf("Enter two values: ");
    scanf("%d%d",&no1,&no2);
    large=(no1>no2)?no1:no2;
    printf("The larger number is %d",large);
}