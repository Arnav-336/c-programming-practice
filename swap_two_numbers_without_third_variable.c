#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values to swap: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping the values of a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping the values of a=%d and b=%d",a,b);
}