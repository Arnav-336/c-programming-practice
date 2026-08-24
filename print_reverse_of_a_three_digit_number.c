#include<stdio.h>
int main()
{
    int no,num;
    printf("Enter a three digit number: ");
    scanf("%d",&no);
    num=no;
    int no1,no2,no3,rev;
    no1=no%10*100;
    no=no/10;
    no2=no%10*10;
    no=no/10;
    no3=no%10*1;
    rev=no1+no2+no3;
    printf("The reverse of %d is %d",num,rev);
}