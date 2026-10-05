#include<stdio.h>
int main()
{
    int no,fact=1,temp;
    printf("Enter a number: ");
    scanf("%d",&no);
    temp=no;
    while(no!=1)
    {
        fact=fact*no;
        no--;
    }
    printf("Factorial of %d is %d",temp,fact);
}