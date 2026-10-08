#include<stdio.h>
int main()
{
    int a=0,b=1,c,end;
    printf("Enter the number till which you want fibonacci series: ");
    scanf("%d",&end);
    do
    {
        printf("%d\n",c);
        c=a+b;
        a=b;
        b=c;
    }
    while(c<end);
}