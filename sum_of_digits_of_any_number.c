#include<stdio.h>
int main()
{
    int no,digit,sum,num;
    printf("Enter a number to check the addition of its digits: ");
    scanf("%d",&no);
    num=no;
    sum=0;
    while(no!=0)
    {
        digit=no%10;
        sum=sum+digit;
        no=no/10;
    }
        printf("\nThe sum of digits of %d is %d",num,sum);
}