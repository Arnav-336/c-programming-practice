#include<stdio.h>
int main()
{
    int no=121,num=121;
    int no1,no2,no3,rev;
    no1=no%10*100;
    no=no/10;
    no2=no%10*10;
    no=no/10;
    no3=no%10*1;
    no=no/10;
    rev=no1+no2+no3;
    if (num==rev)
    printf("PALINDROME");
    else
    printf("NOT PALINDROME");
}