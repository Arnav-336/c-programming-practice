#include<stdio.h>
int main()
{
    int no,digit,rev=0,temp;
    printf("Enter a number to check palindrome or not: ");
    scanf("%d",&no);
    temp=no;
    while(no!=0)
    {
        digit=no%10;
        rev=rev*10+digit;
        no=no/10;
    }
    printf("Reverse is %d",rev);
    if(rev==temp)
    {
        printf("\nPALINDROME");
    }
    else
    {
        printf("\nNOT PALINDROME");
    }
}