#include<stdio.h>
int main()
{
    int a,b,no;
    printf("Starting point: ");
    scanf("%d",&a);
    printf("Ending point: ");
    scanf("%d",&b);
    do
    {
        if(a%3==0&&a%7!=0)
        {
            printf("%d ",a);
        }
        a++;
    }
    while(a<=b);
}