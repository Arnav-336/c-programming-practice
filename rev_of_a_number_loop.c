#include<stdio.h>
int main()
{
    int no,digit,rev=0,temp;
    printf("Enter the number to reverse: ");
    scanf("%d",&no);
    temp=no;
    while(no!=0)
    {
        digit=no%10;
        rev=rev*10+digit;
        no=no/10;
    }
    printf("Reverse of %d is %d",temp,rev);
}