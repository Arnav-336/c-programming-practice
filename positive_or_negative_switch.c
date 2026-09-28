#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number to check if positive or negative or zero: ");
    scanf("%d",&no);
    switch(no>0)
    {
        case 1:
        printf("%d is positive",no);
        break;
        case 0:
        switch(no<0)
        {
            case 1:
            printf("%d is negative",no);
            break;
            case 0:
            printf("%d is zero",no);
            break;
        }
    }
}