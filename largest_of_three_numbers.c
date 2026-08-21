#include<stdio.h>
int main()
{
    int no1,no2,no3;
    no1=12;
    no2=43;
    no3=27;
    if (no1>no2&&no1>no3)
    printf("The largest no. is %d",no1);
    else if (no2>no3&&no2>no1)
    printf("The largest no. is %d",no2);
    else
    printf("The largest no. is %d",no3);
}