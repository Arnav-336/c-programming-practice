#include<stdio.h>
int main()
{
    int no=55,num=55;
    int no1,no2;
    no1=no%5;
    no2=no%11;
    if(no1==0&&no2==0)
    printf("The number %d is divisible by both 5 and 11",num);
    else
    printf("The number %d is not divisible by both 5 and 11",num);
}