#include<stdio.h>
int main()
{
    int no1,no2,no3,temp,small;
    printf("Enter three values to check: ");
    scanf("%d%d%d",&no1,&no2,&no3);
    temp=(no1>no2)?no2:no1;
    small=(temp>no3)?no3:temp;
    printf("The smaller number among %d, %d and %d is %d",no1,no2,no3,small);
}