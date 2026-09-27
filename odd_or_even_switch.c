#include<stdio.h>
int main()
{
    int no,num;
    printf("Enter a number to check: ");
    scanf("%d",&no);
    num=no%2;
    switch(num)
    {
        case 1:
        printf("%d is an odd number",no);
        break;
        case 0:
        printf("%d is an even number",no);
        break;
    }
}